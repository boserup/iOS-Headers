/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOFeatureStyleAttributes, VGLMeshVendor, VGLTexture, VKStyle, VKVectorTile;

// Not exported
@interface VKPolygonGroup : NSObject
{
    VKStyle *_style;
    VKVectorTile *_tile;
    VGLMeshVendor *_fillMeshVendor;
    VGLMeshVendor *_strokeMeshVendor;
    double _contentScale;
    VGLTexture *_texture;
    VGLTexture *_textureVariant;
    double _variation;
    GEOFeatureStyleAttributes *_styleAttributes;
}

@property(retain, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(readonly, nonatomic) VGLTexture *textureVariant; // @synthesize textureVariant=_textureVariant;
@property(readonly, nonatomic) VGLMeshVendor *strokeMeshVendor; // @synthesize strokeMeshVendor=_strokeMeshVendor;
@property(readonly, nonatomic) VGLMeshVendor *fillMeshVendor; // @synthesize fillMeshVendor=_fillMeshVendor;
@property(readonly, nonatomic) VGLTexture *texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) VKStyle *style; // @synthesize style=_style;
- (void)updateTextures;
- (unsigned long long)triangleCount;
- (id)_textureForName:(id)arg1 scale:(double)arg2;
- (void)dealloc;
- (id)initWithStyle:(id)arg1 tile:(id)arg2 attributes:(id)arg3 contentScale:(double)arg4;

@end

