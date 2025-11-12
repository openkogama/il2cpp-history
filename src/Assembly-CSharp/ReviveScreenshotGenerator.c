
/* IEnumerator GenerateTexture(Action`1[Byte[]], Vector3, Quaternion, Int32, Int32) */

IEnumerator *
Assembly-CSharp.dll::ReviveScreenshotGenerator::ReviveScreenshotGenerator_GenerateTexture
          (ReviveScreenshotGenerator *this,Action_1_Byte_ *textureDataCallback,Vector3 *cameraPos,
          Quaternion *cameraRot,int32_t width,int32_t height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[5].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 5) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[4].monitor = (MonitorData *)textureDataCallback;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[4].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  fVar8 = cameraPos->z;
  pIVar1[2].monitor = *(MonitorData **)cameraPos;
  uVar9 = *(undefined8 *)cameraRot;
  uVar10 = *(undefined8 *)&cameraRot->z;
  *(float *)&pIVar1[3].klass = fVar8;
  *(int32_t *)&pIVar1[2].klass = width;
  *(int32_t *)((longlong)&pIVar1[2].klass + 4) = height;
  *(undefined8 *)((longlong)&pIVar1[3].klass + 4) = uVar9;
  *(undefined8 *)((longlong)&pIVar1[3].monitor + 4) = uVar10;
  return pIVar1;
}


/* Void GenerateTextureDataCameraViewAtTransform(Action`1[Byte[]], Vector3, Quaternion, Int32,
   Int32) */

void Assembly-CSharp.dll::ReviveScreenshotGenerator::
     ReviveScreenshotGenerator_GenerateTextureDataCameraViewAtTransform
               (ReviveScreenshotGenerator *this,Action_1_Byte_ *callback,Vector3 *cameraPos,
               Quaternion *cameraRot,int32_t width,int32_t height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(ReviveScreenshotGenerator **)(lVar1 + 0x50) = this;
  if (iRam_? != 0) {
    uVar2 = (uint)(lVar1 + 0x50U >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  *(Action_1_Byte_ **)(lVar1 + 0x48) = callback;
  if (iVar7 != 0) {
    uVar2 = (uint)(lVar1 + 0x48U >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  fVar8 = cameraPos->z;
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)cameraPos;
  fVar9 = cameraRot->x;
  fVar10 = cameraRot->y;
  fVar11 = cameraRot->z;
  fVar12 = cameraRot->w;
  *(float *)(lVar1 + 0x30) = fVar8;
  *(int32_t *)(lVar1 + 0x20) = width;
  *(float *)(lVar1 + 0x34) = fVar9;
  *(float *)(lVar1 + 0x38) = fVar10;
  *(float *)(lVar1 + 0x3c) = fVar11;
  *(float *)(lVar1 + 0x40) = fVar12;
  *(int32_t *)(lVar1 + 0x24) = height;
  if (lVar1 == 0) {
    uVar13 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar13);
    pSVar14 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar14,(MethodInfo *)0x0);
    uVar13 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this_00,uVar13);
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  bVar16 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
           MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar16 == 0) {
    uVar13 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar13);
    pSVar14 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar14,(MethodInfo *)0x0);
    uVar13 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this_01,uVar13);
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (ReviveScreenshotGenerator *)0x0) {
    FUN_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pvVar17 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar17 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pcVar15 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pcRam_? = pcVar15;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar17,lVar1);
  return;
}

