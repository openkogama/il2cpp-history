
/* AccessoryBundleClient() */

void Assembly-CSharp.dll::AccessoryBundleClient::AccessoryBundleClient__ctor
               (AccessoryBundleClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>
                   );
    cRam_? = '\x01';
  }
  (this->fields)._.accessoryBundleID = -1;
  this_00 = (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>
                           );
  if (this_00 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__List__
              );
    (this->fields)._.accessoryBundleItems = this_00;
    func_?(&(this->fields)._.accessoryBundleItems,this_00);
    value = (AccessoryTimelimit *)
            func_?(TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
    if (value != (AccessoryTimelimit *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
      method_00 = (MethodInfo *)&(this->fields)._.timelimit;
      (this->fields)._.timelimit = value;
      func_?(method_00,value);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

