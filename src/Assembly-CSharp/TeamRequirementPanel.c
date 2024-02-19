
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
  uVar1 = (int)this_00 < 0;
  uVar2 = 1;
  pDVar3 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)this;
  if (this_00 == (Image *)0x0) goto code_?;
  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
            (this_00,checkmarkSprite,(MethodInfo *)0x0);
  unaff_EBX = (this->fields)._.textField;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  uVar1 = (int)pMVar4 < 0;
  uVar2 = 1;
  if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
  pMVar5 = (pMVar4->fields).teamManager;
  uVar1 = (int)pMVar5 < 0;
  uVar2 = 1;
  if (pMVar5 == (MVTeamManager *)0x0) goto code_?;
  unaff_EDI = (pMVar5->fields).teamNames;
  uVar1 = (int)unaff_EDI < 0;
  uVar2 = 1;
  if (unaff_EDI == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) goto code_?;
  this = (TeamRequirementPanel *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
  ;
  uVar1 = (int)team < 0;
  uVar2 = 1;
  pDVar3 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)team;
  if (team == (Object *)0x0) goto code_?;
  pIVar6 = (team->klass->_0).element_class;
  pIVar7 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
  bVar8 = (int)pIVar6 - (int)pIVar7 < 0;
  uVar2 = pIVar6 == pIVar7;
  pMVar9 = TypeInfo__MV__WorldObject__MVTeam;
  do {
    uVar1 = bVar8;
    if ((bool)uVar2) {
      pDVar10 = pDVar3;
      pIVar11 = (Int32Enum__Enum *)func_?();
      pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EDI,*pIVar11,
                          (MethodInfo *)this);
      unaff_EDI = pDVar10;
      uVar1 = (int)unaff_EBX < 0;
      uVar2 = unaff_EBX == (Text *)0x0;
      if (!(bool)uVar2) {
        pTVar13 = (Text *)(unaff_EBX->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(unaff_EBX->klass->vtable).set_text.method)(unaff_EBX,pOVar12);
        unaff_EBX = pTVar13;
        pIVar6 = (pDVar3->klass->_0).element_class;
        pIVar7 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
        uVar1 = (int)pIVar6 - (int)pIVar7 < 0;
        uVar2 = 0;
        pMVar9 = TypeInfo__MV__WorldObject__MVTeam;
        if (pIVar6 == pIVar7) {
          func_?(pDVar3);
          return;
        }
        goto code_?;
      }
    }
    else {
code_?:
      func_?(pDVar3,pMVar9);
    }
code_?:
    uVar14 = func_?();
    bVar8 = false;
    pMVar9 = extraout_ECX;
    if ((bool)uVar1) {
      ppMVar15 = &extraout_ECX[-1].vtable.System_IConvertible_ToSByte.method;
      *(char *)ppMVar15 = *(char *)ppMVar15 + (char)((uint)unaff_EBX >> 8) + (uVar14 < 0x3d947910);
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  } while( true );
}

