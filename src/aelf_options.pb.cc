// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: aelf_options.proto

#include "aelf_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace aelf {
}  // namespace aelf
namespace protobuf_aelf_5foptions_2eproto {
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "aelf_options.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022aelf_options.proto\022\004aelf\032 google/proto"
      "buf/descriptor.proto:/\n\004base\022\037.google.pr"
      "otobuf.ServiceOptions\030\251\351\036 \003(\t:7\n\014csharp_"
      "state\022\037.google.protobuf.ServiceOptions\030\306"
      "\351\036 \001(\t:1\n\007is_view\022\036.google.protobuf.Meth"
      "odOptions\030\221\361\036 \001(\010:3\n\010is_event\022\037.google.p"
      "rotobuf.MessageOptions\030\264\207\003 \001(\010:3\n\nis_ind"
      "exed\022\035.google.protobuf.FieldOptions\030\361\321\036 "
      "\001(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 323);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "aelf_options.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2fdescriptor_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_aelf_5foptions_2eproto
namespace aelf {
const ::std::string base_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::google::protobuf::internal::RepeatedStringTypeTraits, 9, false >
  base(kBaseFieldNumber, base_default);
const ::std::string csharp_state_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  csharp_state(kCsharpStateFieldNumber, csharp_state_default);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  is_view(kIsViewFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  is_event(kIsEventFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  is_indexed(kIsIndexedFieldNumber, false);

// @@protoc_insertion_point(namespace_scope)
}  // namespace aelf

// @@protoc_insertion_point(global_scope)
