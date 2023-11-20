
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AvatarCapture+<DrawAvatarRoutine>d__12::
     AvatarCapture_DrawAvatarRoutine_d_12_MoveNext
               (AvatarCapture_DrawAvatarRoutine_d_12 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__2__current = (Object *)0x0;
    (this->fields).__1__state = -1;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
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
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
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
  func_?(&
                  MethodInfo__AvatarCapture___DrawAvatarRoutine_d__12__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

