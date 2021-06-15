
/* BsonObjectId(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonObjectId::BsonObjectId__ctor
               (BsonObjectId *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Byte__Array *)0x0) {
    func_?();
  }
  else if (value->max_length == 0xc) {
    (this->fields)._Value_k__BackingField = value;
    return;
  }
  this_00 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_An_ObjectId_must_be_12_bytes,(MethodInfo *)0x0);
  pMStack1 = MethodInfo__Newtonsoft__Json__Bson__BsonObjectId__BsonObjectId_System__Byte____;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

