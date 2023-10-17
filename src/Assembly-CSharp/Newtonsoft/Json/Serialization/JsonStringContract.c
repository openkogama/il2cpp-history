
/* JsonStringContract(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonStringContract::
     JsonStringContract__ctor(JsonStringContract *this,Type *underlyingType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_underlyingType);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  paramName = StringLiteral_underlyingType;
  if (underlyingType != (Type *)0x0) {
    (this->fields)._._UnderlyingType_k__BackingField = underlyingType;
    func_?(&this->fields,underlyingType);
    (this->fields)._._CreatedType_k__BackingField = underlyingType;
    func_?(&(this->fields)._._CreatedType_k__BackingField,underlyingType);
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

