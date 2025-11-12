
/* Vector3 <DOAnchorPos3DZ>b__0() */

Vector3 * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass19_0::
          DOTweenModuleUI_c_DisplayClass19_0__DOAnchorPos3DZ_b__0
                    (Vector3 *__return_storage_ptr__,DOTweenModuleUI_c_DisplayClass19_0 *this,
                    MethodInfo *method)

{
  this_00 = (this->fields).target;
  if (this_00 != (RectTransform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
             RectTransform_get_anchoredPosition3D(&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Void <DOAnchorPos3DZ>b__1(Vector3) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUI+<>c__DisplayClass19_0::
     DOTweenModuleUI_c_DisplayClass19_0__DOAnchorPos3DZ_b__1
               (DOTweenModuleUI_c_DisplayClass19_0 *this,Vector3 *x,MethodInfo *method)

{
  this_00 = (this->fields).target;
  if (this_00 != (RectTransform *)0x0) {
    aVStack_1[0].x = x->x;
    aVStack_1[0].y = x->y;
    aVStack_1[0].z = x->z;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition3D
              (this_00,aVStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

