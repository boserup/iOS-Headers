/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSMutableArray, PKPhysicsWorld;

@interface PKPhysicsBody : NSObject <NSCopying, NSCoding>
{
    id <NSObject> _representedObject;
    struct b2BodyDef _bodyDef;
    struct b2Body *_body;
    int _dynamicType;
    struct b2FixtureDef _fixtureDef;
    struct b2Fixture *_fixture;
    PKPhysicsWorld *_world;
    NSMutableArray *_joints;
    _Bool _inUse;
    int _shapeType;
    struct CGPath *_path;
    struct CGPoint _p0;
    struct CGPoint _p1;
    struct CGSize _size;
    double _radius;
    struct CGImage *_mask;
    id _postStepBlock;
}

+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1;
@property(copy, nonatomic) id postStepBlock; // @synthesize postStepBlock=_postStepBlock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allContactedBodies;
- (id)description;
- (id)_descriptionFormat;
- (id)_descriptionClassName;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic, getter=isDynamic) _Bool dynamic;
@property(nonatomic) double friction;
@property(nonatomic) double restitution;
@property(readonly, nonatomic) double area;
@property(nonatomic) double density;
@property(nonatomic) double mass;
@property(readonly, nonatomic) NSArray *joints;
@property(nonatomic, getter=isResting) _Bool resting;
@property(nonatomic) _Bool allowsRotation;
@property(nonatomic) double angularVelocity;
@property(nonatomic) struct CGVector velocity;
@property(nonatomic) unsigned int contactTestBitMask;
@property(nonatomic) unsigned int collisionBitMask;
@property(nonatomic) unsigned int categoryBitMask;
@property(nonatomic) _Bool affectedByGravity;
@property(nonatomic) _Bool usesPreciseCollisionDetection;
- (void)applyUnscaledImpulse:(struct CGVector)arg1;
- (void)applyUnscaledImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyUnscaledForce:(struct CGVector)arg1;
- (void)applyUnscaledForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyAngularImpulse:(double)arg1;
- (void)applyImpulse:(struct CGVector)arg1;
- (void)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyTorque:(double)arg1;
- (void)applyForce:(struct CGPoint)arg1;
- (void)applyForce:(struct CGPoint)arg1 atPoint:(struct CGPoint)arg2;
@property(nonatomic) double angularDamping;
@property(nonatomic) double linearDamping;
@property(nonatomic) double rotation;
- (_Bool)_allowSleep;
- (void)set_allowSleep:(_Bool)arg1;
@property(nonatomic) struct CGPoint position;
@property(nonatomic) __weak id <NSObject> representedObject;
- (id)initWithEdgeLoopFromPath:(struct CGPath *)arg1;
- (id)initWithEdgeChainFromPath:(struct CGPath *)arg1;
- (id)initWithPolygonFromPath:(struct CGPath *)arg1;
- (id)initWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)initWithRectangleOfSize:(struct CGSize)arg1;
- (id)initWithCircleOfRadius:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
