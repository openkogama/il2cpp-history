
/* Void Start() */

void Assembly-CSharp.dll::RollingNumberDigitAndroid::RollingNumberDigitAndroid_Start
               (RollingNumberDigitAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Transform *)(this->fields).rollingDigitTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->y;
    (this->fields).firstNumPosY = (float)uVar2;
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                       );
    if (pMVar3 != (MVInteractableBase *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                ((RectTransform *)pMVar3,(MethodInfo *)0x0);
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)this,
                          UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                         );
      func_?();
      if (pMVar3 != (MVInteractableBase *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  ((RectTransform *)pMVar3,(Vector2)0x0,(MethodInfo *)0x0);
        fVar4 = (this->fields).firstNumPosY + (this->fields).digitSize;
        (this->fields).currPos = fVar4;
        (this->fields).targetPosY = fVar4;
        (this->fields).currNumPos = fVar4;
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RollingNumberDigitAndroid::RollingNumberDigitAndroid_Update
               (RollingNumberDigitAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).rollTimer;
  if (_UNK_? <= fVar1) {
    pTVar2 = (Transform *)(this->fields).rollingDigitTransform;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    fVar1 = (this->fields).targetPosY;
    uStack_5 = uVar4;
  }
  else {
    fVar6 = (this->fields).rollingSpeed;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    a = (this->fields).currNumPos;
    b = (this->fields).targetPosY;
    fVar1 = fVar7 * fVar6 + fVar1;
    (this->fields).rollTimer = fVar1;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01(fVar1,(MethodInfo *)0x0);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp(a,b,fVar1,(MethodInfo *)0x0);
    pTVar2 = (Transform *)(this->fields).rollingDigitTransform;
    (this->fields).currPos = fVar1;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
    uVar8 = pVVar3->x;
    fVar1 = (this->fields).currPos;
    uStack_5 = uVar8;
  }
  pTVar2 = (Transform *)(this->fields).rollingDigitTransform;
  if (pTVar2 != (Transform *)0x0) {
    value.y = fVar1;
    value.x = (float)uStack_5;
    value.z = pVVar3->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar2,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* RollingNumberDigitAndroid() */

void Assembly-CSharp.dll::RollingNumberDigitAndroid::RollingNumberDigitAndroid__ctor
               (RollingNumberDigitAndroid *this,MethodInfo *method)

{
  (this->fields).firstNumPosY = 29.5;
  (this->fields).digitSize = 29.5;
  (this->fields).rollingSpeed = 6.0;
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


/* Void set_Number(Int32) */

void Assembly-CSharp.dll::RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
               (RollingNumberDigitAndroid *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).targetNumber;
  (this->fields).rollTimer = 0.0;
  if ((iVar1 == 9) && (value == 0)) {
    (this->fields).currPos = (this->fields).firstNumPosY;
    pTVar2 = (Transform *)(this->fields).rollingDigitTransform;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
    pTVar2 = (Transform *)(this->fields).rollingDigitTransform;
    uVar4 = pVVar3->x;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    value_00.y = (this->fields).currPos;
    value_00.x = (float)uVar4;
    value_00.z = pVVar3->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar2,value_00,(MethodInfo *)0x0);
    (this->fields).targetNumber = -1;
    iVar1 = -1;
  }
  fVar5 = (this->fields).digitSize;
  fVar6 = (this->fields).firstNumPosY;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  pTVar2 = (Transform *)(this->fields).rollingDigitTransform;
  dVar7 = (double)fVar6;
  (this->fields).currNumPos =
       (float)(iVar1 + 1) * fVar5 -
       (float)(double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_?,
                               SUB84(dVar7,0) & _UNK_?);
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
    pTVar2 = (Transform *)(this->fields).rollingDigitTransform;
    uVar8 = pVVar3->x;
    if (pTVar2 != (Transform *)0x0) {
      value_01.y = (this->fields).currNumPos;
      value_01.x = (float)uVar8;
      value_01.z = pVVar3->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar2,value_01,(MethodInfo *)0x0);
      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                        (value,0,9,(MethodInfo *)0x0);
      (this->fields).targetNumber = iVar9;
      dVar7 = (double)(this->fields).firstNumPosY;
      (this->fields).targetPosY =
           (float)(iVar9 + 1) * (this->fields).digitSize -
           (float)(double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_?,
                                   SUB84(dVar7,0) & _UNK_?);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

