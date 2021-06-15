
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::TeamRequirementPanel::TeamRequirementPanel_OnToggleEnabled
               (TeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,bool enabled,
               MethodInfo *method)

{
  _enabled = (Text *)(uint)enabled;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.checkmark;
  bVar1 = 0;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    unaff_EBX = (this->fields)._.textField;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar1 = 0;
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)this_01,(MethodInfo *)0x0);
      bVar1 = 0;
      if (this_02 != (SkyParam *)0x0) {
        this_03 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                             (MethodInfo *)0x0);
        bVar1 = 0;
        if ((this_03 != (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0) &&
           (bVar1 = 0, unaff_EDI != (int *)0x0)) {
          pIVar2 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
          bVar1 = *(Il2CppClass **)(*unaff_EDI + 0x20) < pIVar2;
          if (*(Il2CppClass **)(*unaff_EDI + 0x20) == pIVar2) {
            pMVar3 = (MVTeam__Enum *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
            ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                      (this_03,*pMVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                      );
            bVar1 = 0;
            if (unaff_EBX == (Text *)0x0) goto code_?;
            (*(code *)(unaff_EBX->klass->vtable).set_text.method)();
            pIVar2 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
            bVar1 = *(Il2CppClass **)(*unaff_EDI + 0x20) < pIVar2;
            if (*(Il2CppClass **)(*unaff_EDI + 0x20) == pIVar2) {
              func_?();
              return;
            }
            func_?();
            unaff_EBX = _enabled;
          }
          func_?();
        }
      }
    }
  }
code_?:
  uVar4 = func_?();
  cRam_? = cRam_? + (char)unaff_EBX +
                 (uVar4 < 0x1d1017f2 || uVar4 + 0xe2efe80e < (uint)bVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

