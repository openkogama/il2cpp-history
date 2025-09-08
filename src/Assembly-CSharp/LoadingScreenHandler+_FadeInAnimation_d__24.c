
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LoadingScreenHandler+<FadeInAnimation>d__24::
     LoadingScreenHandler_FadeInAnimation_d_24_MoveNext
               (LoadingScreenHandler_FadeInAnimation_d_24 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pLVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._fadeInTime_5__2 = 0.0;
    this_02 = (SubscribableVariable_1_System_Single_ *)
              func_?(TypeInfo__UnityEngine__WaitForSeconds);
    SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
              (this_02,0.1,(MethodInfo *)0x0);
    (this->fields).__2__current = (Object *)this_02;
    func_?(&(this->fields).__2__current,this_02);
    (this->fields).__1__state = 1;
    return 1;
  }
  if ((iVar1 != 1) && (iVar1 != 2)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pLVar2 != (LoadingScreenHandler *)0x0) {
    if ((pLVar2->fields).targetFadeInTime < (this->fields)._fadeInTime_5__2) {
      return 0;
    }
    fVar3 = (this->fields)._fadeInTime_5__2;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 + fVar3;
    (this->fields)._fadeInTime_5__2 = fVar4;
    fVar3 = MathFunctions::MathFunctions_SmoothInverseLerp
                       (0.0,(pLVar2->fields).targetFadeInTime,fVar4,(MethodInfo *)0x0);
    if (fVar3 < 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = fVar3;
      if (_UNK_? < fVar3) {
        fVar4 = _UNK_?;
      }
    }
    this_00 = (pLVar2->fields).centerCanvasGroup;
    value_02 = (Vector3__Class **)(fVar4 + 0.0);
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,(float)value_02,(MethodInfo *)0x0);
      pTVar5 = (Transform *)(pLVar2->fields).centerTransform;
      if (cRam_? == '\0') {
        value_02 = &TypeInfo__UnityEngine__Vector3;
        func_?();
        cRam_? = '\x01';
      }
      fVar4 = (pLVar2->fields).startCenterScale;
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar7 = (pVVar6->oneVector).x;
      uVar8 = (pVVar6->oneVector).y;
      fVar9 = 0.0;
      if ((0.0 <= fVar3) && (fVar9 = _UNK_?, fVar3 <= _UNK_?)) {
        fVar9 = fVar3;
      }
      fVar4 = ((pLVar2->fields).endCenterScale - fVar4) * fVar9 + fVar4;
      if (pTVar5 != (Transform *)0x0) {
        value.y = (float)uVar8 * fVar4;
        value.x = (float)uVar7 * fVar4;
        value.z = (pVVar6->oneVector).z * fVar4;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar5,value,(MethodInfo *)0x0);
        pLVar10 = (pLVar2->fields).cube;
        if ((pLVar10 != (LoadingCube *)0x0) &&
           (pMVar11 = (pLVar10->fields)._CubeMaterial_k__BackingField, pMVar11 != (Material *)0x0)) {
          pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                              ((Color *)&stack0xffffffe8,pMVar11,(MethodInfo *)0x0);
          pLVar10 = (pLVar2->fields).cube;
          uVar13 = pCVar12->r;
          uVar14 = pCVar12->g;
          uVar15 = pCVar12->b;
          value_01.b = (float)uVar15;
          value_01.g = (float)uVar14;
          value_01.r = (float)uVar13;
          if ((pLVar10 != (LoadingCube *)0x0) &&
             (pMVar11 = (pLVar10->fields)._CubeMaterial_k__BackingField, pMVar11 != (Material *)0x0)) {
            value_01.a = (float)value_02;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (pMVar11,value_01,(MethodInfo *)0x0);
            this_01 = (pLVar2->fields).sceneObjects;
            if (this_01 != (GameObject *)0x0) {
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_01,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              fVar4 = (pLVar2->fields).startObjectsScale;
              pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar16 = (pVVar6->oneVector).x;
              uVar17 = (pVVar6->oneVector).y;
              if (fVar3 < 0.0) {
                fVar3 = 0.0;
              }
              else if (_UNK_? < fVar3) {
                fVar3 = _UNK_?;
              }
              fVar4 = ((pLVar2->fields).endObjectsScale - fVar4) * fVar3 + fVar4;
              if (pTVar5 != (Transform *)0x0) {
                value_00.y = (float)uVar17 * fVar4;
                value_00.x = (float)uVar16 * fVar4;
                value_00.z = (pVVar6->oneVector).z * fVar4;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar5,value_00,(MethodInfo *)0x0);
                (this->fields).__2__current = (Object *)0x0;
                func_?(&(this->fields).__2__current,0);
                (this->fields).__1__state = 2;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LoadingScreenHandler+<FadeInAnimation>d__24::
     LoadingScreenHandler_FadeInAnimation_d_24_System_Collections_IEnumerator_Reset
               (LoadingScreenHandler_FadeInAnimation_d_24 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__LoadingScreenHandler___FadeInAnimation_d__24__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

