
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AvatarCapture+<DrawAvatarRoutine>d__12::
     AvatarCapture_DrawAvatarRoutine_d_12_MoveNext
               (AvatarCapture_DrawAvatarRoutine_d_12 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    bVar2 = iRam_? != 0;
    (this->fields).__1__state = -1;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
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
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (this_00 != (AvatarCapture *)0x0) {
      AvatarCapture::AvatarCapture_DrawObject
                (this_00,(this->fields).cameraTransform,(this->fields).objectTransform,
                 (MethodInfo *)0x0);
      this_01 = (this_00->fields).renderCam;
      if (this_01 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render(this_01,(MethodInfo *)0x0);
        return 0;
      }
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AvatarCapture+<DrawAvatarRoutine>d__12::
     AvatarCapture_DrawAvatarRoutine_d_12_System_Collections_IEnumerator_Reset
               (AvatarCapture_DrawAvatarRoutine_d_12 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__AvatarCapture___DrawAvatarRoutine_d__12__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

