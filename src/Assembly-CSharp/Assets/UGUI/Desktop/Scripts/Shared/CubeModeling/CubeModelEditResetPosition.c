
/* Void ClickResetPosition() */

void Assembly-CSharp.dll::Assets::UGUI::Desktop::Scripts::Shared::CubeModeling::
     CubeModelEditResetPosition::CubeModelEditResetPosition_ClickResetPosition
               (CubeModelEditResetPosition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                   );
    cRam_? = '\x01';
  }
  pUVar1 = TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
           ->static_fields->OnResetPosition;
  if (pUVar1 != (UnityAction *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  }
  return;
}

