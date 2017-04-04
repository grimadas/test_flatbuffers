// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SAMPLE2_SAMPLE_H_
#define FLATBUFFERS_GENERATED_SAMPLE2_SAMPLE_H_

#include "flatbuffers/flatbuffers.h"

#include "objects_generated.h"

namespace sample {

struct IndependentObject;

struct IndependentObject FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_OBJECT1S = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<sample::Object1>> *object1s() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<sample::Object1>> *>(VT_OBJECT1S);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_OBJECT1S) &&
           verifier.Verify(object1s()) &&
           verifier.VerifyVectorOfTables(object1s()) &&
           verifier.EndTable();
  }
};

struct IndependentObjectBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_object1s(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<sample::Object1>>> object1s) {
    fbb_.AddOffset(IndependentObject::VT_OBJECT1S, object1s);
  }
  IndependentObjectBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  IndependentObjectBuilder &operator=(const IndependentObjectBuilder &);
  flatbuffers::Offset<IndependentObject> Finish() {
    const auto end = fbb_.EndTable(start_, 1);
    auto o = flatbuffers::Offset<IndependentObject>(end);
    return o;
  }
};

inline flatbuffers::Offset<IndependentObject> CreateIndependentObject(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<sample::Object1>>> object1s = 0) {
  IndependentObjectBuilder builder_(_fbb);
  builder_.add_object1s(object1s);
  return builder_.Finish();
}

inline flatbuffers::Offset<IndependentObject> CreateIndependentObjectDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<sample::Object1>> *object1s = nullptr) {
  return sample::CreateIndependentObject(
      _fbb,
      object1s ? _fbb.CreateVector<flatbuffers::Offset<sample::Object1>>(*object1s) : 0);
}

inline const sample::IndependentObject *GetIndependentObject(const void *buf) {
  return flatbuffers::GetRoot<sample::IndependentObject>(buf);
}

inline bool VerifyIndependentObjectBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<sample::IndependentObject>(nullptr);
}

inline void FinishIndependentObjectBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<sample::IndependentObject> root) {
  fbb.Finish(root);
}

}  // namespace sample

#endif  // FLATBUFFERS_GENERATED_SAMPLE2_SAMPLE_H_
