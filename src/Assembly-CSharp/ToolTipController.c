
/* Void Awake() */

void Assembly-CSharp.dll::ToolTipController::ToolTipController_Awake
               (ToolTipController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ToolTipUI_MethodInfo__UnityEngine__Object__Instantiate<ToolTipUI>_ToolTipUI__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toolTipUi;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar1 = (ToolTipUI *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pTVar1,parent,0,
                      ToolTipUI_MethodInfo__UnityEngine__Object__Instantiate<ToolTipUI>_ToolTipUI__UnityEngine__Transform__bool_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).toolTipUi = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).toolTipUi >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::ToolTipController::ToolTipController_LateUpdate
               (ToolTipController *this,MethodInfo *method)

{
  if ((this->fields).updatedThisFrame != 0) {
code_?:
    (this->fields).updatedThisFrame = 0;
    return;
  }
  this_00 = (this->fields).toolTipUi;
  if (this_00 != (ToolTipUI *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SendToolTip(Vector2, String) */

void Assembly-CSharp.dll::ToolTipController::ToolTipController_SendToolTip
               (ToolTipController *this,Vector2 position,String *toolTip,MethodInfo *method)

{
  if ((toolTip == (String *)0x0) || ((toolTip->fields)._stringLength == 0)) {
    return;
  }
  pTVar1 = (this->fields).toolTipUi;
  if ((pTVar1 != (ToolTipUI *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pTVar1 = (this->fields).toolTipUi;
      if ((pTVar1 == (ToolTipUI *)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
    }
    pTVar1 = (this->fields).toolTipUi;
    if (pTVar1 != (ToolTipUI *)0x0) {
      ToolTipUI::ToolTipUI_Set(pTVar1,position,toolTip,(MethodInfo *)0x0);
      (this->fields).updatedThisFrame = 1;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

