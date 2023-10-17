
/* AccessoryDataClient() */

void Assembly-CSharp.dll::AccessoryDataClient::AccessoryDataClient__ctor
               (AccessoryDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
    cRam_? = '\x01';
  }
  value = (AccessoryTimelimit *)
          func_?(TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
  if (value != (AccessoryTimelimit *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
    method_00 = (MethodInfo *)&(this->fields)._.time;
    (this->fields)._.time = value;
    func_?(method_00,value);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

