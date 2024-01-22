
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
  uVar1 = 0;
  uVar2 = this_00 == (Image *)0x0;
  if (!(bool)uVar2) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    unaff_EBX = (this->fields)._.textField;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    uVar1 = 0;
    uVar2 = pMVar3 == (MVNetworkGame *)0x0;
    if (!(bool)uVar2) {
      pMVar4 = (pMVar3->fields).teamManager;
      uVar1 = 0;
      uVar2 = pMVar4 == (MVTeamManager *)0x0;
      if (!(bool)uVar2) {
        this_01 = (pMVar4->fields).teamNames;
        uVar1 = 0;
        uVar2 = this_01 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0;
        unaff_retaddr = unaff_EDI;
        if (!(bool)uVar2) {
          uVar1 = 0;
          uVar2 = team == (Object *)0x0;
          if (!(bool)uVar2) {
            pIVar5 = (team->klass->_0).element_class;
            pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
            uVar1 = pIVar5 < pIVar6;
            if (pIVar5 == pIVar6) {
              pIVar7 = (Int32Enum__Enum *)func_?(team);
              pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,*pIVar7,
                                  method_00);
              uVar1 = 0;
              uVar2 = 1;
              if (unaff_EBX == (Text *)0x0) goto code_?;
              pTVar9 = (Text *)(unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
              ;
              (*(code *)(unaff_EBX->klass->vtable).set_text.method)(unaff_EBX,pOVar8);
              unaff_EBX = pTVar9;
              pIVar5 = (team->klass->_0).element_class;
              pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
              uVar1 = pIVar5 < pIVar6;
              if (pIVar5 == pIVar6) {
                func_?(team);
                return;
              }
            }
            uVar2 = 0;
            func_?(team,TypeInfo__MV__WorldObject__MVTeam);
          }
        }
      }
    }
  }
code_?:
  uVar10 = func_?();
  if (!(bool)uVar1 && !(bool)uVar2) {
    *(char *)(unaff_retaddr + 0x76) = *(char *)(unaff_retaddr + 0x76) + (char)unaff_EBX + uVar1;
    *(char *)(unaff_retaddr + 0x76) =
         *(char *)(unaff_retaddr + 0x76) + (char)unaff_EBX + (uVar10 < 0x3d765910);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  in_stack_12 = in_stack_12 + extraout_DH;
  if (*(int *)(uVar10 + 4) != 0) {
    (**(code **)(*(int *)(uVar10 + 4) + 0xc))(*(undefined4 *)(*(int *)(uVar10 + 4) + 0x20));
  }
  return;
}

