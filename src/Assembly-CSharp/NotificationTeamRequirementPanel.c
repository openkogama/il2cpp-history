
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationTeamRequirementPanel::
     NotificationTeamRequirementPanel_OnToggleEnabled
               (NotificationTeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,
               bool enabled,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    uVar1 = 0x103f;
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    cRam_? = '\x01';
  }
  pIVar3 = (this->fields)._.checkmark;
  if (pIVar3 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar3,checkmarkSprite,(MethodInfo *)0x0);
    pTVar4 = (this->fields)._.textField;
    uVar1 = 0x103f;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    if ((((pMVar5 != (MVNetworkGame *)0x0) &&
         (pMVar6 = (pMVar5->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) &&
        (this_00 = (pMVar6->fields).teamNames,
        this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) &&
       (unaff_EDI = team, team != (Object *)0x0)) {
      pMVar7 = TypeInfo__MV__WorldObject__MVTeam;
      if ((team->klass->_0).element_class != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      goto code_?;
      pIVar8 = (Int32Enum__Enum *)func_?(team);
      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,*pIVar8,method_00)
      ;
      if (pTVar4 != (Text *)0x0) {
        uVar1 = 0x103f;
        (*(code *)(pTVar4->klass->vtable).set_text.method)
                  (pTVar4,pOVar9,(pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        pMVar7 = TypeInfo__MV__WorldObject__MVTeam;
        if ((team->klass->_0).element_class != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class
           ) goto code_?;
        unaff_EDI = (Object *)&UNK_?;
        puVar10 = (undefined4 *)func_?(team);
        switch(*puVar10) {
        case 0:
          pIVar3 = (this->fields).requirementImage;
          if (pIVar3 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar3,(this->fields).blueNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 1:
          pIVar3 = (this->fields).requirementImage;
          if (pIVar3 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar3,(this->fields).redNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 2:
          pIVar3 = (this->fields).requirementImage;
          if (pIVar3 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar3,(this->fields).greenNotificationIcon,(MethodInfo *)0x0);
            return;
          }
          break;
        case 3:
          pIVar3 = (this->fields).requirementImage;
          if (pIVar3 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar3,(this->fields).yellowNotificationIcon,(MethodInfo *)0x0);
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
  pMVar7 = extraout_ECX;
  team = unaff_EDI;
code_?:
  bVar11 = func_?(team,pMVar7);
  in_AF = 9 < (bVar11 & 0xf) | in_AF;
  *(char *)(extraout_EDX + -0x65efc066) =
       *(char *)(extraout_EDX + -0x65efc066) + (bVar11 + in_AF * -6 & 0xf) + in_AF;
  func_?(CONCAT22(uVar1,in_CS),0xffffff9a);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

