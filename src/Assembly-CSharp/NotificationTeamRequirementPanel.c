
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationTeamRequirementPanel::
     NotificationTeamRequirementPanel_OnToggleEnabled
               (NotificationTeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,
               bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.checkmark;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((this_01 != (MVNetworkGame *)0x0) &&
         (this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)this_01,(MethodInfo *)0x0),
         this_02 != (SkyParam *)0x0)) &&
        (this_03 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                              (MethodInfo *)0x0),
        this_03 != (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0)) &&
       (unaff_EDI != (int *)0x0)) {
      if (*(Il2CppClass **)(*unaff_EDI + 0x20) !=
          (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) goto code_?;
      pMVar1 = (MVTeam__Enum *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                (this_03,*pMVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                );
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

