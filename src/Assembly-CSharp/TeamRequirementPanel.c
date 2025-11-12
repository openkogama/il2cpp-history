
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::TeamRequirementPanel::TeamRequirementPanel_OnToggleEnabled
               (TeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,bool enabled,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                  ,team,checkmarkSprite,CONCAT71(in_register_00000089,enabled));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.checkmark;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._.textField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
        (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) &&
       ((this_01 = (pMVar4->fields).teamNames,
        this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0 &&
        (team != (Object *)0x0)))) {
      if ((team->klass->_0).element_class != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      {
        FUN_?(team,TypeInfo__MV__WorldObject__MVTeam);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                          *(Int32Enum__Enum *)&team[1].klass,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                         );
      if (pTVar1 != (Text *)0x0) {
        (*(pTVar1->klass->vtable).set_text.methodPtr)
                  (pTVar1,pOVar6,(pTVar1->klass->vtable).set_text.method);
        if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class
           ) {
          return;
        }
        FUN_?(team);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

