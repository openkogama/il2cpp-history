
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
  uVar2 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
  if (pIVar1 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar1,checkmarkSprite,(MethodInfo *)0x0);
    pTVar3 = (this->fields)._.textField;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    uVar2 = (POPCOUNT((uint)pMVar4 & 0xff) & 1U) == 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pMVar5 = (pMVar4->fields).teamManager;
      uVar2 = (POPCOUNT((uint)pMVar5 & 0xff) & 1U) == 0;
      if (pMVar5 != (MVTeamManager *)0x0) {
        this_00 = (pMVar5->fields).teamNames;
        uVar2 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
        if ((this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
           (uVar2 = (POPCOUNT((uint)team & 0xff) & 1U) == 0, unaff_EDI = team,
           team != (Object *)0x0)) {
          pIVar6 = (team->klass->_0).element_class;
          pIVar7 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
          cVar8 = pIVar6 < pIVar7;
          uVar9 = (int)pIVar6 - (int)pIVar7;
          uVar2 = (POPCOUNT(uVar9 & 0xff) & 1U) == 0;
          pMVar10 = TypeInfo__MV__WorldObject__MVTeam;
          if (uVar9 != 0) goto code_?;
          pIVar11 = (Int32Enum__Enum *)func_?(team);
          pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,*pIVar11,
                               method_00);
          uVar2 = (POPCOUNT((uint)pTVar3 & 0xff) & 1U) == 0;
          if (pTVar3 != (Text *)0x0) {
            (*(code *)(pTVar3->klass->vtable).set_text.method)
                      (pTVar3,pOVar12,
                       (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pIVar6 = (team->klass->_0).element_class;
            pIVar7 = (TypeInfo__MV__WorldObject__MVTeam->_0).element_class;
            cVar8 = pIVar6 < pIVar7;
            uVar9 = (int)pIVar6 - (int)pIVar7;
            uVar2 = (POPCOUNT(uVar9 & 0xff) & 1U) == 0;
            pMVar10 = TypeInfo__MV__WorldObject__MVTeam;
            if (uVar9 != 0) goto code_?;
            unaff_EDI = (Object *)&UNK_?;
            puVar13 = (undefined4 *)func_?(team);
            switch(*puVar13) {
            case 0:
              pIVar1 = (this->fields).requirementImage;
              uVar2 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
              if (pIVar1 != (Image *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                          (pIVar1,(this->fields).blueNotificationIcon,(MethodInfo *)0x0);
                return;
              }
              break;
            case 1:
              pIVar1 = (this->fields).requirementImage;
              uVar2 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
              if (pIVar1 != (Image *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                          (pIVar1,(this->fields).redNotificationIcon,(MethodInfo *)0x0);
                return;
              }
              break;
            case 2:
              pIVar1 = (this->fields).requirementImage;
              uVar2 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
              if (pIVar1 != (Image *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                          (pIVar1,(this->fields).greenNotificationIcon,(MethodInfo *)0x0);
                return;
              }
              break;
            case 3:
              pIVar1 = (this->fields).requirementImage;
              uVar2 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
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
    }
  }
  cVar8 = '\0';
  func_?();
  pMVar10 = extraout_ECX;
  team = unaff_EDI;
code_?:
  func_?(team,pMVar10);
  if ((bool)uVar2) {
    return;
  }
  *(char *)(extraout_EDX + -0x55efc12e) =
       *(char *)(extraout_EDX + -0x55efc12e) + (char)extraout_EDX + cVar8;
  *(char *)&this->klass = *(char *)&this->klass >> (extraout_CL & 0x1f);
  *(char *)&this->klass = *(char *)&this->klass >> (extraout_CL & 0x1f);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

