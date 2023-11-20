
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__List__
            );
  (this->fields)._.accessoryBundleItems = this_00;
  func_?(&(this->fields)._.accessoryBundleItems,this_00);
  method_01 = TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit;
  value = (AccessoryTimelimit *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&(this->fields)._.timelimit;
  (this->fields)._.timelimit = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

