
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::TeamRequirementPanel::TeamRequirementPanel_OnToggleEnabled
               (TeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,bool enabled,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.checkmark;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._.textField;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    if ((((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) &&
        (unaff_EDI = (pMVar3->fields).teamNames,
        unaff_EDI != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) &&
       (team != (Object *)0x0)) {
      if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      {
        pDVar4 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)team;
        pIVar5 = (Int32Enum__Enum *)func_?();
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EDI,*pIVar5,
                            method_00);
        unaff_EDI = pDVar4;
        if (pTVar1 == (Text *)0x0) goto code_?;
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,pOVar6,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class
           ) {
          func_?(team);
          return;
        }
      }
      func_?(team,TypeInfo__MV__WorldObject__MVTeam);
    }
  }
code_?:
  func_?();
  bVar7 = pDRam3d29103e < unaff_EDI;
  pDRam3d29103e =
       (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)((int)pDRam3d29103e - (int)unaff_EDI);
  *extraout_ECX = *extraout_ECX + (char)((uint)extraout_ECX >> 8) + bVar7;
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

