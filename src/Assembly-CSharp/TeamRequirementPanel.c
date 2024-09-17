
/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::TeamRequirementPanel::TeamRequirementPanel_OnToggleEnabled
               (TeamRequirementPanel *this,Object *team,Sprite *checkmarkSprite,bool enabled,
               MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_ESI >> 0x10);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.checkmark;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    pTVar2 = (this->fields)._.textField;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
    ;
    if ((((pMVar3 != (MVNetworkGame *)0x0) &&
         (pMVar4 = (pMVar3->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) &&
        (this_01 = (pMVar4->fields).teamNames,
        this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) &&
       (this = (TeamRequirementPanel *)team, team != (Object *)0x0)) {
      if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
      {
        uVar1 = 0x103e;
        pIVar5 = (Int32Enum__Enum *)func_?(team);
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,*pIVar5,
                            method_00);
        if (pTVar2 == (Text *)0x0) goto code_?;
        (*(code *)(pTVar2->klass->vtable).set_text.method)
                  (pTVar2,pOVar6,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        if ((team->klass->_0).element_class == (TypeInfo__MV__WorldObject__MVTeam->_0).element_class
           ) {
          func_?(team);
          return;
        }
      }
      pOVar6 = team;
      func_?(team,TypeInfo__MV__WorldObject__MVTeam);
      uVar1 = (undefined2)((uint)pOVar6 >> 0x10);
    }
  }
code_?:
  uVar7 = 0x103e;
  fVar8 = (float10)func_?();
  this->klass = (TeamRequirementPanel__Class *)(float)fVar8;
  pcVar9 = (code *)swi(3);
  (*pcVar9)(CONCAT22(uVar1,in_SS),CONCAT22(uVar7,in_SS));
  return;
}

