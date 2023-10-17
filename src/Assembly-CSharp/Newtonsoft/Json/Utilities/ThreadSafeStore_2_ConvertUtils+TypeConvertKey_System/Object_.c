
/* ThreadSafeStore`2[ConvertUtils+TypeConvertKey,System.Object](Func`2[Newtonsoft.Json.Utilities.ConvertUtils+TypeConvertKey,Object])
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     ThreadSafeStore`2[ConvertUtils+TypeConvertKey,System::Object]::
     ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object___ctor
               (ThreadSafeStore_2_ConvertUtils_TypeConvertKey_System_Object_ *this,
               Func_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_Object_ *creator,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__System__Object);
  if (value == (Object *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    pMVar1 = (MethodInfo *)&this->fields;
    (this->fields)._lock = value;
    func_?(pMVar1,value);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
    if (creator != (Func_2_Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKey_Object_ *)0x0) {
      (this->fields)._creator = creator;
      func_?(&(this->fields)._creator);
      return;
    }
  }
  uVar2 = func_?();
  this_00 = (ArgumentNullException *)func_?(uVar2);
  func_?(this_00);
  pMVar1 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_creator);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,pMVar1);
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

