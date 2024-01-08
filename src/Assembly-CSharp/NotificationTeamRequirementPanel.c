
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationTeamRequirementPanel::
     NotificationTeamRequirementPanel_OnToggleEnabled
               (NotificationTeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,
               bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.checkmark;
  if (pIVar1 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar1,checkmarkSprite,(MethodInfo *)0x0);
    pTVar2 = (this->fields)._.textField;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    if ((((pMVar3 != (MVNetworkGame *)0x0) &&
         (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) &&
        (unaff_EBX = (pMVar4->fields).teamNames,
        unaff_EBX != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) &&
       (unaff_EDI = team, team != (Object *)0x0)) {
      pIVar5 = (team->klass->_0).element_class;
      pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
      bVar7 = pIVar5 < pIVar6;
      pMVar8 = TypeInfo__MV__WorldObject__MVTeam;
      if (pIVar5 != pIVar6) goto code_?;
      pIVar9 = (Int32Enum__Enum *)func_?(team);
      pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EBX,*pIVar9,
                           method_00);
      if (pTVar2 != (Text *)0x0) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)
                  (pTVar2,pOVar10,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                  );
        pIVar5 = (team->klass->_0).element_class;
        pIVar6 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
        bVar7 = pIVar5 < pIVar6;
        pMVar8 = TypeInfo__MV__WorldObject__MVTeam;
        if (pIVar5 != pIVar6) goto code_?;
        unaff_EDI = (Object *)&UNK_?;
        unaff_EBX = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)team;
        puVar11 = (undefined4 *)func_?();
        switch(*puVar11) {
        case 0:
          pIVar1 = (this->fields).requirementImage;
          if (pIVar1 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).blueNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 1:
          pIVar1 = (this->fields).requirementImage;
          if (pIVar1 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).redNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 2:
          pIVar1 = (this->fields).requirementImage;
          if (pIVar1 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).greenNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 3:
          pIVar1 = (this->fields).requirementImage;
          if (pIVar1 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar1,(this->fields).yellowNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        default:
          return;
        }
      }
    }
  }
  bVar7 = 0;
  func_?();
  pMVar8 = extraout_ECX;
  team = unaff_EDI;
code_?:
  bVar12 = func_?(team,pMVar8);
  pbVar13 = (byte *)(extraout_EDX + -0x2d);
  bVar14 = *pbVar13 + bVar12 / 0x3e;
  bVar15 = CARRY1(*pbVar13,bVar12 / 0x3e) || CARRY1(bVar14,bVar7);
  *pbVar13 = bVar14 + bVar7;
  pbVar13 = (byte *)(extraout_EDX + -0x2d);
  bVar7 = *pbVar13;
  bVar12 = (byte)((uint)unaff_EBX >> 8);
  bVar14 = *pbVar13 + bVar12;
  *pbVar13 = bVar14 + bVar15;
  *(char *)(extraout_EDX + -0x33efc12d) =
       *(char *)(extraout_EDX + -0x33efc12d) + (char)extraout_EDX + -1 +
       (CARRY1(bVar7,bVar12) || CARRY1(bVar14,bVar15));
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

