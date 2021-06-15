
/* Void ExecuteEffect() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_ExecuteEffect
               (SlideOnClick *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
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


/* Void OnDisable() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_OnDisable
               (SlideOnClick *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  uVar1._0_4_ = (this->fields).startPos.x;
  uVar1._4_4_ = (this->fields).startPos.y;
  this_00 = (this->fields).rectTransform;
  (this->fields).readyForSlide = 1;
  fVar2 = (this->fields).startPos.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  v.z = fVar2;
  v.x = (float)(int)uVar1;
  v.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  value = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit(v,(MethodInfo *)0x0)
  ;
  if (this_00 != (RectTransform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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


/* Void SetNewStartPosition(Vector3) */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_SetNewStartPosition
               (SlideOnClick *this,Vector3 newPos,MethodInfo *method)

{
  (this->fields).targetPos.x = newPos.x;
  (this->fields).targetPos.y = newPos.y;
  (this->fields).targetPos.z = newPos.z;
  return;
}


/* IEnumerator SlideTowardsPosition() */

IEnumerator *
Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_SlideTowardsPosition
          (SlideOnClick *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameMeterVisuals__SlideOnClick___SlideTowardsPosition_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.y = (float)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Start() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick_Start
               (SlideOnClick *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).rectTransform;
  if (this_00 != (RectTransform *)0x0) {
    v = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
                  (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit_1
                       (&VStack_2,v,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    (this->fields).startPos.x = pVVar1->x;
    (this->fields).startPos.y = fVar3;
    (this->fields).startPos.z = fVar4;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SlideOnClick() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick::SlideOnClick__ctor
               (SlideOnClick *this,MethodInfo *method)

{
  (this->fields).readyForSlide = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

