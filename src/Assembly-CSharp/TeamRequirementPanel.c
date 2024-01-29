
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::TeamRequirementPanel::TeamRequirementPanel_OnToggleEnabled
               (TeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,bool enabled,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.checkmark;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    unaff_EBX = (this->fields)._.textField;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    if ((((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) &&
        (unaff_EDI = (pMVar2->fields).teamNames,
        unaff_EDI != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) &&
       (team != (Object *)0x0)) {
      if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      {
        pIVar3 = (Int32Enum__Enum *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__get_Item
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EDI,*pIVar3,method_00);
        unaff_EDI = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)team;
        if (unaff_EBX == (Text *)0x0) goto code_?;
        ppTVar4 = &unaff_EBX->klass;
        unaff_EBX = (Text *)((*ppTVar4)->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)((*ppTVar4)->vtable).set_text.method)();
        if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class
           ) {
          func_?();
          return;
        }
      }
      func_?();
    }
  }
code_?:
  func_?();
  puVar5 = (uint *)(&stack0x3d9c290c + (int)unaff_EDI);
  pTVar6 = (Text *)*puVar5;
  *puVar5 = *puVar5 - (int)unaff_EBX;
  *extraout_ECX = *extraout_ECX + (char)((uint)extraout_ECX >> 8) + (pTVar6 < unaff_EBX);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

