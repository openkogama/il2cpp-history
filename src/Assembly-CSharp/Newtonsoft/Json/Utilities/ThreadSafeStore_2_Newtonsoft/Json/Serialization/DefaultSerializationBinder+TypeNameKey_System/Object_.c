
/* ThreadSafeStore`2[Newtonsoft.Json.Serialization.DefaultSerializationBinder+TypeNameKey,System.Object](Func`2[Newtonsoft.Json.Serialization.DefaultSerializationBinder+TypeNameKey,Object])
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ThreadSafeStore`2[Newtonsoft::Json::
     Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
     ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object___ctor
               (ThreadSafeStore_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                *this,Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                      *creator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Object;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields)._lock = (Object *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if (creator !=
      (Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_ *)0x0) {
    (this->fields)._creator = creator;
    return;
  }
  this_01 = (ArgumentNullException *)func_?();
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,StringLiteral_creator,(MethodInfo *)0x0);
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

