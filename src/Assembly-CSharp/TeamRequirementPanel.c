
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  cVar1 = '\0';
  uVar2 = 0;
  uVar3 = (int)this_00 < 0;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    unaff_EBX = (this->fields)._.textField;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    cVar1 = '\0';
    uVar2 = 0;
    uVar3 = (int)pMVar4 < 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pMVar5 = (pMVar4->fields).teamManager;
      cVar1 = '\0';
      uVar2 = 0;
      uVar3 = (int)pMVar5 < 0;
      if (pMVar5 != (MVTeamManager *)0x0) {
        this_01 = (pMVar5->fields).teamNames;
        cVar1 = '\0';
        uVar2 = 0;
        uVar3 = (int)this_01 < 0;
        if (this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
          cVar1 = '\0';
          uVar2 = 0;
          uVar3 = (int)team < 0;
          if (team != (Object *)0x0) {
            pIVar6 = (team->klass->_0).element_class;
            pIVar7 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
            cVar1 = pIVar6 < pIVar7;
            uVar2 = SBORROW4((int)pIVar6,(int)pIVar7);
            iVar8 = (int)pIVar6 - (int)pIVar7;
            if (pIVar6 == pIVar7) {
              pIVar9 = (Int32Enum__Enum *)func_?(team);
              pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,*pIVar9,
                                  method_00);
              cVar1 = '\0';
              uVar2 = 0;
              uVar3 = (int)unaff_EBX < 0;
              if (unaff_EBX == (Text *)0x0) goto code_?;
              pTVar11 = (Text *)(unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
              ;
              (*(code *)(unaff_EBX->klass->vtable).set_text.method)(unaff_EBX,pOVar10);
              unaff_EBX = pTVar11;
              pIVar6 = (team->klass->_0).element_class;
              pIVar7 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              cVar1 = pIVar6 < pIVar7;
              uVar2 = SBORROW4((int)pIVar6,(int)pIVar7);
              iVar8 = (int)pIVar6 - (int)pIVar7;
              if (pIVar6 == pIVar7) {
                func_?(team);
                return;
              }
            }
            uVar3 = iVar8 < 0;
            func_?(team,TypeInfo__MV__WorldObject__MVTeam);
          }
        }
      }
    }
  }
code_?:
  uVar12 = func_?();
  iVar8 = (int)uVar12;
  if ((bool)uVar2) {
    if (!(bool)uVar3) {
      pcVar13 = (char *)((int)((ulonglong)uVar12 >> 0x20) + -0x46efc305);
      *pcVar13 = *pcVar13 + (char)((ulonglong)uVar12 >> 0x28);
    }
    cVar1 = (char)(iVar8 + 1);
    iVar8 = CONCAT31((int3)((uint)(iVar8 + 1) >> 8),cVar1 + -1);
    if (SCARRY1(cVar1,-1)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  else {
    cVar15 = (char)((uint)unaff_EBX >> 8);
    bVar16 = SCARRY1(cRam_?,cVar15);
    cVar15 = cRam_? + cVar15;
    cRam_? = cVar15 + cVar1;
    if (bVar16 == SCARRY1(cVar15,cVar1)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  (**(code **)(iVar8 + 0xc))(*(undefined4 *)(iVar8 + 0x20));
  return;
}

