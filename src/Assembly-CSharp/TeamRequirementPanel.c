
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
    unaff_EBX = (this->fields)._.textField;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    bVar1 = 0;
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pMVar3 = (pMVar2->fields).teamManager;
      bVar1 = 0;
      if (pMVar3 != (MVTeamManager *)0x0) {
        this_01 = (pMVar3->fields).teamNames;
        bVar1 = 0;
        unaff_retaddr = unaff_EDI;
        if ((this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
           (bVar1 = 0, team != (Object *)0x0)) {
          pIVar4 = (team->klass->_0).element_class;
          pIVar5 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
          bVar1 = pIVar4 < pIVar5;
          if (pIVar4 == pIVar5) {
            pIVar6 = (Int32Enum__Enum *)func_?(team);
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,*pIVar6,
                                 method_00);
            bVar1 = 0;
            if (unaff_EBX == (Text *)0x0) goto code_?;
            pTVar8 = (Text *)(unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
            (*(code *)(unaff_EBX->klass->vtable).set_text.method)(unaff_EBX,pOVar7);
            unaff_EBX = pTVar8;
            pIVar4 = (team->klass->_0).element_class;
            pIVar5 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
            bVar1 = pIVar4 < pIVar5;
            if (pIVar4 == pIVar5) {
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
  pbVar9 = (byte *)(unaff_retaddr + 0x42);
  bVar10 = (byte)unaff_EBX;
  bVar11 = CARRY1(*pbVar9,bVar10) || CARRY1(*pbVar9 + bVar10,bVar1);
  *pbVar9 = *pbVar9 + bVar10 + bVar1;
  pbVar9 = (byte *)(unaff_retaddr + 0x42);
  bVar1 = *pbVar9;
  bVar12 = *pbVar9;
  *pbVar9 = bVar12 + bVar10 + bVar11;
  *(char *)(unaff_retaddr + 0x42) =
       *(char *)(unaff_retaddr + 0x42) + bVar10 +
       (CARRY1(bVar1,bVar10) || CARRY1(bVar12 + bVar10,bVar11));
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

