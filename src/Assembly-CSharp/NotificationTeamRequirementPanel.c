
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
      pMVar5 = TypeInfo__MV__WorldObject__MVTeam;
      if ((team->klass->_0).element_class != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      goto code_?;
      pIVar6 = (Int32Enum__Enum *)func_?(team);
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EBX,*pIVar6,
                           method_00);
      if (pTVar2 != (Text *)0x0) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)
                  (pTVar2,pOVar7,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                  );
        pMVar5 = TypeInfo__MV__WorldObject__MVTeam;
        if ((team->klass->_0).element_class != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class
           ) goto code_?;
        unaff_EDI = (Object *)&UNK_?;
        unaff_EBX = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)team;
        puVar8 = (undefined4 *)func_?();
        switch(*puVar8) {
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
  func_?();
  pMVar5 = extraout_ECX;
  team = unaff_EDI;
code_?:
  bVar9 = func_?(team,pMVar5);
  bVar10 = (byte)((uint)extraout_EDX >> 8);
  bVar11 = (byte)((uint)unaff_EBX >> 8) < bVar10;
  pbVar12 = (byte *)(extraout_EDX + -2);
  bVar13 = CARRY1(*pbVar12,bVar9) || CARRY1(*pbVar12 + bVar9,bVar11);
  *pbVar12 = *pbVar12 + bVar9 + bVar11;
  pbVar12 = (byte *)(extraout_EDX + -2);
  bVar9 = *pbVar12;
  bVar14 = *pbVar12 + (byte)unaff_EBX;
  *pbVar12 = bVar14 + bVar13;
  *(char *)(extraout_EDX + -2) =
       *(char *)(extraout_EDX + -2) + bVar10 +
       (CARRY1(bVar9,(byte)unaff_EBX) || CARRY1(bVar14,bVar13));
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

