// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_SURFACES_INTERFACES_QUADS_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_SURFACES_INTERFACES_QUADS_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/services/geometry/interfaces/geometry.mojom-internal.h"
#include "mojo/services/surfaces/interfaces/surface_id.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {

class Color;
class CheckerboardQuadState;
class DebugBorderQuadState;
class IoSurfaceContentQuadState;
class RenderPassId;
class RenderPassQuadState;
class SolidColorQuadState;
class SurfaceQuadState;
class TextureQuadState;
class TileQuadState;
class StreamVideoQuadState;
class YUVVideoQuadState;
class Quad;
class SharedQuadState;
class Pass;


namespace internal {

class Color_Data;
class CheckerboardQuadState_Data;
class DebugBorderQuadState_Data;
class IoSurfaceContentQuadState_Data;
class RenderPassId_Data;
class RenderPassQuadState_Data;
class SolidColorQuadState_Data;
class SurfaceQuadState_Data;
class TextureQuadState_Data;
class TileQuadState_Data;
class StreamVideoQuadState_Data;
class YUVVideoQuadState_Data;
class Quad_Data;
class SharedQuadState_Data;
class Pass_Data;



#pragma pack(push, 1)


class Color_Data {
 public:
  static Color_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint32_t rgba;
  uint8_t padfinal_[4];

 private:
  Color_Data();
  ~Color_Data() = delete;
};
static_assert(sizeof(Color_Data) == 16,
              "Bad sizeof(Color_Data)");

class CheckerboardQuadState_Data {
 public:
  static CheckerboardQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  CheckerboardQuadState_Data();
  ~CheckerboardQuadState_Data() = delete;
};
static_assert(sizeof(CheckerboardQuadState_Data) == 8,
              "Bad sizeof(CheckerboardQuadState_Data)");

class DebugBorderQuadState_Data {
 public:
  static DebugBorderQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  DebugBorderQuadState_Data();
  ~DebugBorderQuadState_Data() = delete;
};
static_assert(sizeof(DebugBorderQuadState_Data) == 8,
              "Bad sizeof(DebugBorderQuadState_Data)");

class IoSurfaceContentQuadState_Data {
 public:
  static IoSurfaceContentQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  IoSurfaceContentQuadState_Data();
  ~IoSurfaceContentQuadState_Data() = delete;
};
static_assert(sizeof(IoSurfaceContentQuadState_Data) == 8,
              "Bad sizeof(IoSurfaceContentQuadState_Data)");

class RenderPassId_Data {
 public:
  static RenderPassId_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t layer_id;
  int32_t index;

 private:
  RenderPassId_Data();
  ~RenderPassId_Data() = delete;
};
static_assert(sizeof(RenderPassId_Data) == 16,
              "Bad sizeof(RenderPassId_Data)");

class RenderPassQuadState_Data {
 public:
  static RenderPassQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::RenderPassId_Data> render_pass_id;
  uint32_t mask_resource_id;
  uint8_t pad1_[4];
  mojo::internal::StructPointer<mojo::internal::PointF_Data> mask_uv_scale;
  mojo::internal::StructPointer<mojo::internal::Size_Data> mask_texture_size;
  mojo::internal::StructPointer<mojo::internal::PointF_Data> filters_scale;

 private:
  RenderPassQuadState_Data();
  ~RenderPassQuadState_Data() = delete;
};
static_assert(sizeof(RenderPassQuadState_Data) == 48,
              "Bad sizeof(RenderPassQuadState_Data)");

class SolidColorQuadState_Data {
 public:
  static SolidColorQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::Color_Data> color;
  uint8_t force_anti_aliasing_off : 1;
  uint8_t padfinal_[7];

 private:
  SolidColorQuadState_Data();
  ~SolidColorQuadState_Data() = delete;
};
static_assert(sizeof(SolidColorQuadState_Data) == 24,
              "Bad sizeof(SolidColorQuadState_Data)");

class SurfaceQuadState_Data {
 public:
  static SurfaceQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::SurfaceId_Data> surface;

 private:
  SurfaceQuadState_Data();
  ~SurfaceQuadState_Data() = delete;
};
static_assert(sizeof(SurfaceQuadState_Data) == 16,
              "Bad sizeof(SurfaceQuadState_Data)");

class TextureQuadState_Data {
 public:
  static TextureQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint32_t resource_id;
  uint8_t premultiplied_alpha : 1;
  uint8_t flipped : 1;
  uint8_t nearest_neighbor : 1;
  uint8_t pad3_[3];
  mojo::internal::StructPointer<mojo::internal::PointF_Data> uv_top_left;
  mojo::internal::StructPointer<mojo::internal::PointF_Data> uv_bottom_right;
  mojo::internal::StructPointer<internal::Color_Data> background_color;
  mojo::internal::ArrayPointer<float> vertex_opacity;

 private:
  TextureQuadState_Data();
  ~TextureQuadState_Data() = delete;
};
static_assert(sizeof(TextureQuadState_Data) == 48,
              "Bad sizeof(TextureQuadState_Data)");

class TileQuadState_Data {
 public:
  static TileQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::RectF_Data> tex_coord_rect;
  mojo::internal::StructPointer<mojo::internal::Size_Data> texture_size;
  uint8_t swizzle_contents : 1;
  uint8_t nearest_neighbor : 1;
  uint8_t pad3_[3];
  uint32_t resource_id;

 private:
  TileQuadState_Data();
  ~TileQuadState_Data() = delete;
};
static_assert(sizeof(TileQuadState_Data) == 32,
              "Bad sizeof(TileQuadState_Data)");

class StreamVideoQuadState_Data {
 public:
  static StreamVideoQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  StreamVideoQuadState_Data();
  ~StreamVideoQuadState_Data() = delete;
};
static_assert(sizeof(StreamVideoQuadState_Data) == 8,
              "Bad sizeof(StreamVideoQuadState_Data)");

class YUVVideoQuadState_Data {
 public:
  static YUVVideoQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::RectF_Data> tex_coord_rect;
  uint32_t y_plane_resource_id;
  uint32_t u_plane_resource_id;
  uint32_t v_plane_resource_id;
  uint32_t a_plane_resource_id;
  int32_t color_space;
  uint8_t padfinal_[4];

 private:
  YUVVideoQuadState_Data();
  ~YUVVideoQuadState_Data() = delete;
};
static_assert(sizeof(YUVVideoQuadState_Data) == 40,
              "Bad sizeof(YUVVideoQuadState_Data)");

class Quad_Data {
 public:
  static Quad_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t material;
  uint8_t needs_blending : 1;
  uint8_t pad1_[3];
  mojo::internal::StructPointer<mojo::internal::Rect_Data> rect;
  mojo::internal::StructPointer<mojo::internal::Rect_Data> opaque_rect;
  mojo::internal::StructPointer<mojo::internal::Rect_Data> visible_rect;
  uint32_t shared_quad_state_index;
  uint8_t pad5_[4];
  mojo::internal::StructPointer<internal::CheckerboardQuadState_Data> checkerboard_quad_state;
  mojo::internal::StructPointer<internal::DebugBorderQuadState_Data> debug_border_quad_state;
  mojo::internal::StructPointer<internal::IoSurfaceContentQuadState_Data> io_surface_quad_state;
  mojo::internal::StructPointer<internal::RenderPassQuadState_Data> render_pass_quad_state;
  mojo::internal::StructPointer<internal::SolidColorQuadState_Data> solid_color_quad_state;
  mojo::internal::StructPointer<internal::SurfaceQuadState_Data> surface_quad_state;
  mojo::internal::StructPointer<internal::TextureQuadState_Data> texture_quad_state;
  mojo::internal::StructPointer<internal::TileQuadState_Data> tile_quad_state;
  mojo::internal::StructPointer<internal::StreamVideoQuadState_Data> stream_video_quad_state;
  mojo::internal::StructPointer<internal::YUVVideoQuadState_Data> yuv_video_quad_state;

 private:
  Quad_Data();
  ~Quad_Data() = delete;
};
static_assert(sizeof(Quad_Data) == 128,
              "Bad sizeof(Quad_Data)");

class SharedQuadState_Data {
 public:
  static SharedQuadState_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::Transform_Data> content_to_target_transform;
  mojo::internal::StructPointer<mojo::internal::Size_Data> content_bounds;
  mojo::internal::StructPointer<mojo::internal::Rect_Data> visible_content_rect;
  mojo::internal::StructPointer<mojo::internal::Rect_Data> clip_rect;
  uint8_t is_clipped : 1;
  uint8_t pad4_[3];
  float opacity;
  int32_t blend_mode;
  int32_t sorting_context_id;

 private:
  SharedQuadState_Data();
  ~SharedQuadState_Data() = delete;
};
static_assert(sizeof(SharedQuadState_Data) == 56,
              "Bad sizeof(SharedQuadState_Data)");

class Pass_Data {
 public:
  static Pass_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t id;
  uint8_t has_transparent_background : 1;
  uint8_t pad1_[3];
  mojo::internal::StructPointer<mojo::internal::Rect_Data> output_rect;
  mojo::internal::StructPointer<mojo::internal::Rect_Data> damage_rect;
  mojo::internal::StructPointer<mojo::internal::Transform_Data> transform_to_root_target;
  mojo::internal::ArrayPointer<internal::Quad_Data*> quads;
  mojo::internal::ArrayPointer<internal::SharedQuadState_Data*> shared_quad_states;

 private:
  Pass_Data();
  ~Pass_Data() = delete;
};
static_assert(sizeof(Pass_Data) == 56,
              "Bad sizeof(Pass_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_SERVICES_SURFACES_INTERFACES_QUADS_MOJOM_INTERNAL_H_