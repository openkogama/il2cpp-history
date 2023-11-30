
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
    unaff_EBX = pTVar2;
    if (pMVar3 != (MVNetworkGame *)0x0) {
      pMVar4 = (pMVar3->fields).teamManager;
      bVar1 = 0;
      if (pMVar4 != (MVTeamManager *)0x0) {
        unaff_EDI = (pMVar4->fields).teamNames;
        bVar1 = 0;
        if ((unaff_EDI != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
           (bVar1 = 0, this = (TeamRequirementPanel *)team, team != (Object *)0x0)) {
          pIVar5 = (team->klass->_0).element_class;
          pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
          bVar1 = pIVar5 < pIVar6;
          if (pIVar5 == pIVar6) {
            pIVar7 = (Int32Enum__Enum *)func_?();
            pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EDI,*pIVar7,
                                 method_00);
            bVar1 = 0;
            unaff_EDI = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)team;
            if (pTVar2 == (Text *)0x0) goto code_?;
            unaff_EBX = (Text *)(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
            (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,pOVar8);
            pIVar5 = (team->klass->_0).element_class;
            pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
            bVar1 = pIVar5 < pIVar6;
            if (pIVar5 == pIVar6) {
              func_?();
              return;
            }
          }
          func_?(team);
        }
      }
    }
  }
code_?:
  uVar9 = func_?();
  uVar10 = (undefined2)((uint6)uVar9 >> 0x20);
  puVar11 = (uint *)((int)&unaff_EDI[1].fields._entries + 1);
  puVar12 = (undefined1 *)*puVar11;
  uVar13 = *puVar11;
  *puVar11 = (uVar13 - (int)&stack0xfffffffc) - (uint)bVar1;
  *extraout_ECX =
       *extraout_ECX + (char)unaff_EBX +
       (puVar12 < &stack0xfffffffc || uVar13 - (int)&stack0xfffffffc < (uint)bVar1);
  out(this->klass,uVar10);
  *extraout_ECX = *extraout_ECX + (char)unaff_EBX + ((uint)uVar9 < 0x3d6f1910);
  out(this->monitor,uVar10);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

