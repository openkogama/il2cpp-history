
/* Void ExecuteEffect() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_ExecuteEffect
               (SlideOnClick *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if ((bVar1 != 0) && ((this->fields).readyForSlide != 0)) {
      (this->fields).readyForSlide = 0;
      routine = SlideOnClick_SlideTowardsPosition(this,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LerpToPos(Vector2, Vector2, Single) */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_LerpToPos
               (SlideOnClick *this,Vector2 from,Vector2 to,float i,MethodInfo *method)

{
  this_00 = (this->fields).rectTransform;
  if ((this->fields).ignoreY == 0) {
    if (i < 0.0) {
      i = 0.0;
    }
    else if ((float)_UNK_? < i) {
      i = (float)_UNK_?;
    }
    if (this_00 != (RectTransform *)0x0) {
      value.y = (to.y - from.y) * i + from.y;
      value.x = (to.x - from.x) * i + from.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    this = (SlideOnClick *)i;
    pSVar1 = (SlideOnClick *)0x0;
    if ((i < 0.0) || (pSVar1 = _UNK_?, (float)_UNK_? < i)) {
      this = pSVar1;
    }
    if (this_00 != (RectTransform *)0x0) {
      VVar2 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
      VVar2.y = VVar2.y;
      VVar2.x = (to.x - from.x) * (float)this + from.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (this_00,VVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_OnDisable
               (SlideOnClick *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  value.x = (this->fields)._StartPos_k__BackingField.x;
  value.y = (this->fields)._StartPos_k__BackingField.y;
  (this->fields).readyForSlide = 1;
  this_00 = (this->fields).rectTransform;
  if ((this->fields).ignoreY == 0) {
    if (this_00 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  else if (this_00 != (RectTransform *)0x0) {
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
    VVar1.y = VVar1.y;
    VVar1.x = value.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              (this_00,VVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_OnPointerEnter
               (SlideOnClick *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).holding = 1;
  if ((this->fields).readyForSlide != 0) {
    (this->fields).readyForSlide = 0;
    routine = SlideOnClick_SlideTowardsPosition(this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_OnPointerExit
               (SlideOnClick *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).holding = 0;
  return;
}


/* Void SetToPosition(Vector2) */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_SetToPosition
               (SlideOnClick *this,Vector2 pos,MethodInfo *method)

{
  this_00 = (this->fields).rectTransform;
  if ((this->fields).ignoreY == 0) {
    if (this_00 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (this_00,pos,(MethodInfo *)0x0);
      return;
    }
  }
  else if (this_00 != (RectTransform *)0x0) {
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
    VVar1.y = VVar1.y;
    VVar1.x = pos.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              (this_00,VVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator SlideTowardsPosition() */

IEnumerator *
Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_SlideTowardsPosition
          (SlideOnClick *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameMeterVisuals__SlideOnClick___SlideTowardsPosition_d__14);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameMeterVisuals__SlideOnClick___SlideTowardsPosition_d__14;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void Start() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_Start
               (SlideOnClick *this,MethodInfo *method)

{
  this_00 = (this->fields).rectTransform;
  if (this_00 != (RectTransform *)0x0) {
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(this_00,(MethodInfo *)0x0);
    fStack_2 = VVar1.x;
    (this->fields)._StartPos_k__BackingField.x = fStack_2;
    (this->fields)._StartPos_k__BackingField.y = (float)uStack_3;
    (this->fields)._StartPos_k__BackingField.z = 0.0;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SlideOnClick() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick__ctor
               (SlideOnClick *this,MethodInfo *method)

{
  (this->fields).readyForSlide = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

