
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
  this_01 = unaff_EDI;
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
        (this_01 = (TeamRequirementPanel__Class *)(pMVar2->fields).teamNames,
        unaff_retaddr = unaff_EDI, this_01 != (TeamRequirementPanel__Class *)0x0)) &&
       (this = (TeamRequirementPanel *)team, team != (Object *)0x0)) {
      if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      {
        pTVar3 = (TeamRequirementPanel__Class *)team;
        pIVar4 = (Int32Enum__Enum *)func_?();
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,*pIVar4,
                            method_00);
        this_01 = pTVar3;
        if (unaff_EBX == (Text *)0x0) goto code_?;
        pTVar6 = (Text *)(unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(unaff_EBX->klass->vtable).set_text.method)(unaff_EBX,pOVar5);
        unaff_EBX = pTVar6;
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
  bVar7 = this_01 < this->klass;
  puVar8 = (undefined1 *)((int)&(unaff_retaddr->_0).declaringType + 3);
  bVar9 = (byte)unaff_EBX;
  bVar10 = CARRY1(*puVar8,bVar9) || CARRY1(*puVar8 + bVar9,bVar7);
  *puVar8 = *puVar8 + bVar9 + bVar7;
  puVar8 = (undefined1 *)((int)&(unaff_retaddr->_0).declaringType + 3);
  bVar11 = *puVar8;
  cVar12 = *puVar8;
  *puVar8 = cVar12 + bVar9 + bVar10;
  puVar8 = (undefined1 *)((int)&(unaff_retaddr->_0).declaringType + 3);
  *puVar8 = *puVar8 + bVar9 + (CARRY1(bVar11,bVar9) || CARRY1(cVar12 + bVar9,bVar10));
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

