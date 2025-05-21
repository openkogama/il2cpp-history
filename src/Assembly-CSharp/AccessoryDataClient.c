
/* AccessoryDataClient() */

void Assembly-CSharp.dll::AccessoryDataClient::AccessoryDataClient__ctor
               (AccessoryDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit;
  value = (AccessoryTimelimit *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&(this->fields)._.time;
  (this->fields)._.time = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

