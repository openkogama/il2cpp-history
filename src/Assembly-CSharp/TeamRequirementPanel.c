
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
  bVar1 = 0;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    pTVar2 = (this->fields)._.textField;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    bVar1 = 0;
    if (pMVar3 != (MVNetworkGame *)0x0) {
      pMVar4 = (pMVar3->fields).teamManager;
      bVar1 = 0;
      if (pMVar4 != (MVTeamManager *)0x0) {
        this_01 = (pMVar4->fields).teamNames;
        bVar1 = 0;
        if ((this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
           (bVar1 = 0, team != (Object *)0x0)) {
          pIVar5 = (team->klass->_0).element_class;
          pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
          bVar1 = pIVar5 < pIVar6;
          if (pIVar5 == pIVar6) {
            pIVar7 = (Int32Enum__Enum *)func_?(team);
            pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,*pIVar7,
                                 method_00);
            bVar1 = 0;
            if (pTVar2 == (Text *)0x0) goto code_?;
            (*(code *)(pTVar2->klass->vtable).set_text.method)
                      (pTVar2,pOVar8,
                       (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pIVar5 = (team->klass->_0).element_class;
            pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
            bVar1 = pIVar5 < pIVar6;
            if (pIVar5 == pIVar6) {
              func_?(team);
              return;
            }
          }
          func_?(team,TypeInfo__MV__WorldObject__MVTeam);
        }
      }
    }
  }
code_?:
  func_?();
  bVar9 = (char)extraout_ECX - 1;
  pbVar10 = (byte *)(extraout_ECX + -0x65);
  bVar11 = CARRY1(*pbVar10,bVar9) || CARRY1(*pbVar10 + bVar9,bVar1);
  *pbVar10 = *pbVar10 + bVar9 + bVar1;
  pbVar10 = (byte *)(extraout_ECX + -0x65);
  bVar1 = *pbVar10;
  bVar12 = *pbVar10;
  *pbVar10 = bVar12 + bVar9 + bVar11;
  *(char *)(extraout_ECX + -0x65) =
       *(char *)(extraout_ECX + -0x65) + bVar9 +
       (CARRY1(bVar1,bVar9) || CARRY1(bVar12 + bVar9,bVar11));
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

