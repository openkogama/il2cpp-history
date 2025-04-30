
/* AccessoryShopDataClient() */

void Assembly-CSharp.dll::AccessoryShopDataClient::AccessoryShopDataClient__ctor
               (AccessoryShopDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryBundleClient);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__Dictionary__
            );
  (this->fields).accessoryDatas = (Dictionary_2_System_Int32_AccessoryDataClient_ *)this_00;
  func_?(&this->fields,this_00);
  this_01 = (AccessoryBundle *)func_?(TypeInfo__AccessoryBundleClient);
  MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::AccessoryBundle__ctor
            (this_01,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).accessoryBundle;
  *(AccessoryBundle **)method_00 = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

