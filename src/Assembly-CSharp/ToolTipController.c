
/* Void Awake() */

void Assembly-CSharp.dll::ToolTipController::ToolTipController_Awake
               (ToolTipController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).toolTipUi;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      ToolTipUI_MethodInfo__UnityEngine__Object__Instantiate<ToolTipUI>_ToolTipUI_);
  (this->fields).toolTipUi = (ToolTipUI *)pXVar1;
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_00,parent,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SendToolTip(Vector2, String) */

void Assembly-CSharp.dll::ToolTipController::ToolTipController_SendToolTip
               (ToolTipController *this,Vector2 position,String *toolTip,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(toolTip,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pTVar2 = (this->fields).toolTipUi;
  if ((pTVar2 != (ToolTipUI *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar2,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pTVar2 = (this->fields).toolTipUi;
      if ((pTVar2 == (ToolTipUI *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
    }
    pTVar2 = (this->fields).toolTipUi;
    if (pTVar2 != (ToolTipUI *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pTVar4 = (pTVar2->fields).toolTipText;
      if (pTVar4 != (Text *)0x0) {
        (*(code *)(pTVar4->klass->vtable).set_text.method)();
        this_00 = (pTVar2->fields).rectTransform;
        fVar5 = 0.0;
        fVar6 = 0.0;
        func_?();
        iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0)
        ;
        if ((float)iVar7 * _UNK_? < 0.0) {
          fVar5 = 1.0;
        }
        iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        if ((float)iVar7 * _UNK_? < 0.0) {
          fVar6 = 1.0;
        }
        if (this_00 != (RectTransform *)0x0) {
          value.y = fVar6;
          value.x = fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                    (this_00,value,(MethodInfo *)0x0);
          pTVar8 = (Transform *)(pTVar2->fields).rectTransform;
          if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector2);
          }
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit_1
                             ((Vector3 *)&stack0xfffffff0,(Vector2)0x0,(MethodInfo *)0x0);
          if (pTVar8 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar8,*pVVar9,(MethodInfo *)0x0);
            pTVar8 = (Transform *)(pTVar2->fields).rectTransform;
            if (pTVar8 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                        (pTVar8,(MethodInfo *)0x0);
              (this->fields).updatedThisFrame = 1;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

