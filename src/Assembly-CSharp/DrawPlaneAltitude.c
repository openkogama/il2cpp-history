
/* Void Update() */

void Assembly-CSharp.dll::DrawPlaneAltitude::DrawPlaneAltitude_Update
               (DrawPlaneAltitude *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (String *)0x0;
  pSStack_2 = (String *)0x0;
  pTVar3 = (this->fields).altitudeText;
  if (pTVar3 != (Text *)0x0) {
    a = (String *)
        (*(code *)(pTVar3->klass->vtable).get_text.method)
                  (pTVar3,(pTVar3->klass->vtable).set_text.methodPtr);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar4 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
    if ((pDVar4 != (DrawPlaneControllerUUI *)0x0) &&
       (pWVar5 = (pDVar4->fields).worldEditorDrawPlane, pWVar5 != (WorldEditorDrawPlane *)0x0)) {
      pSStack_1 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                  NamedThemeAttribute_1_UnityEngine_Color__get_Name
                            ((NamedThemeAttribute_1_UnityEngine_Color_ *)pWVar5,(MethodInfo *)0x0);
      b = (String *)func_?(&pSStack_1,0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar6 = mscorlib.dll::System::String::String_op_Inequality(a,b,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        return;
      }
      pTVar3 = (this->fields).altitudeText;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pDVar4 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
      if ((pDVar4 != (DrawPlaneControllerUUI *)0x0) &&
         (pWVar5 = (pDVar4->fields).worldEditorDrawPlane, pWVar5 != (WorldEditorDrawPlane *)0x0)) {
        pSStack_2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name
                              ((NamedThemeAttribute_1_UnityEngine_Color_ *)pWVar5,(MethodInfo *)0x0)
        ;
        uVar7 = func_?(&pSStack_2,0);
        if (pTVar3 != (Text *)0x0) {
          (*(code *)(pTVar3->klass->vtable).set_text.method)
                    (pTVar3,uVar7,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                    );
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

