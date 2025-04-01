
/* Void Awake() */

void Assembly-CSharp.dll::ToolTipController::ToolTipController_Awake
               (ToolTipController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ToolTipUI_MethodInfo__UnityEngine__Object__Instantiate<ToolTipUI>_ToolTipUI__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toolTipUi;
  ppTVar2 = &(this->fields).toolTipUi;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pTVar1 = (ToolTipUI *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pTVar1,parent,0,
                      ToolTipUI_MethodInfo__UnityEngine__Object__Instantiate<ToolTipUI>_ToolTipUI__UnityEngine__Transform__bool_
                     );
  *ppTVar2 = pTVar1;
  func_?(ppTVar2,pTVar1);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SendToolTip(Vector2, String) */

void Assembly-CSharp.dll::ToolTipController::ToolTipController_SendToolTip
               (ToolTipController *this,Vector2 position,String *toolTip,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(toolTip,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pTVar2 = (this->fields).toolTipUi;
  if ((pTVar2 != (ToolTipUI *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pTVar2 = (this->fields).toolTipUi;
      if ((pTVar2 == (ToolTipUI *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
    }
    pTVar2 = (this->fields).toolTipUi;
    if ((pTVar2 != (ToolTipUI *)0x0) &&
       (pTVar4 = (pTVar2->fields).toolTipText, pTVar4 != (Text *)0x0)) {
      pTVar5 = pTVar4->klass;
      pIVar6 = (pTVar5->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      (*(code *)(pTVar5->vtable).set_text.method)();
      this_00 = (pTVar2->fields).rectTransform;
      fVar7 = 0.0;
      fVar8 = 0.0;
      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      if ((float)iVar9 * _UNK_? < (float)toolTip) {
        fVar7 = 1.0;
      }
      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      if ((float)iVar9 * _UNK_? < (float)pIVar6) {
        fVar8 = 1.0;
      }
      if (this_00 != (RectTransform *)0x0) {
        value.y = fVar8;
        value.x = fVar7;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                  (this_00,value,(MethodInfo *)0x0);
        pTVar10 = (Transform *)(pTVar2->fields).rectTransform;
        if (pTVar10 != (Transform *)0x0) {
          value_00.y = (float)pIVar6;
          value_00.x = (float)toolTip;
          value_00.z = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar10,value_00,(MethodInfo *)0x0);
          pTVar10 = (Transform *)(pTVar2->fields).rectTransform;
          if (pTVar10 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar10,(MethodInfo *)0x0);
            (this->fields).updatedThisFrame = 1;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

