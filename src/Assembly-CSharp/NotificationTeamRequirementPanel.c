
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationTeamRequirementPanel::
     NotificationTeamRequirementPanel_OnToggleEnabled
               (NotificationTeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,
               bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::UI::Text>__
                  ,team,checkmarkSprite,CONCAT71(in_register_00000089,enabled));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.checkmark;
  if (pIVar1 == (Image *)0x0) goto code_?;
  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
            (pIVar1,checkmarkSprite,(MethodInfo *)0x0);
  pTVar2 = (this->fields)._.textField;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar2 == (Text *)0x0) {
code_?:
    pTVar2 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::
                     Component_GetComponentInChildren_1
                               ((Component *)this,
                                UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::UI::Text>__
                               );
    bVar3 = iRam_? != 0;
    (this->fields)._.textField = pTVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._.textField >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pTVar2->fields)._._._._._._._ == (void *)0x0) goto code_?;
  }
  pTVar2 = (this->fields)._.textField;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar8 != (MVGameControllerBase *)0x0) &&
       (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
      (pMVar10 = (pMVar9->fields).teamManager, pMVar10 != (MVTeamManager *)0x0)) &&
     ((this_00 = (pMVar10->fields).teamNames,
      this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0 && (team != (Object *)0x0)
      ))) {
    if ((team->klass->_0).element_class != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
      FUN_?(team,TypeInfo__MV__WorldObject__MVTeam);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                         *(Int32Enum__Enum *)&team[1].klass,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                        );
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pOVar12);
      if ((team->klass->_0).element_class != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      {
        FUN_?(team);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar13 = *(int *)&team[1].klass;
      if (iVar13 == 0) {
        pIVar1 = (this->fields).requirementImage;
        if (pIVar1 == (Image *)0x0) goto code_?;
        value = (this->fields).blueNotificationIcon;
      }
      else if (iVar13 == 1) {
        pIVar1 = (this->fields).requirementImage;
        if (pIVar1 == (Image *)0x0) goto code_?;
        value = (this->fields).redNotificationIcon;
      }
      else if (iVar13 == 2) {
        pIVar1 = (this->fields).requirementImage;
        if (pIVar1 == (Image *)0x0) goto code_?;
        value = (this->fields).greenNotificationIcon;
      }
      else {
        if (iVar13 != 3) {
          return;
        }
        pIVar1 = (this->fields).requirementImage;
        if (pIVar1 == (Image *)0x0) goto code_?;
        value = (this->fields).yellowNotificationIcon;
      }
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(pIVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

