
/* AccessoryShopDataClient() */

void Assembly-CSharp.dll::AccessoryShopDataClient::AccessoryShopDataClient__ctor
               (AccessoryShopDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_AccessoryDataClient_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__Dictionary__
            );
  (this->fields).accessoryDatas = this_00;
  method_00 = TypeInfo__AccessoryBundleClient;
  this_01 = (AccessoryBundle *)func_?();
  MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryBundle::AccessoryBundle__ctor
            (this_01,(MethodInfo *)0x0);
  (this->fields).accessoryBundle = (AccessoryBundleClient *)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

