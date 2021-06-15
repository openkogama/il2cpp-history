
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarShopController+<Activate>c__AnonStorey0::
     AvatarShopController_Activate_c_AnonStorey0___m__0
               (AvatarShopController_Activate_c_AnonStorey0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._this;
  if ((pAVar1 != (AvatarShopController *)0x0) &&
     (this_00 = (pAVar1->fields).inventoryController, this_00 != (InventoryController *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    iVar3 = (this->fields).pushOption;
    pAVar1 = (this->fields)._this;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)pAVar1,MethodInfo__AvatarShopController__OnPop__,(MethodInfo *)0x0)
    ;
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar2,iVar3,this_01,4);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

