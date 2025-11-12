
/* Void Update() */

void Assembly-CSharp.dll::DrawPlaneAltitude::DrawPlaneAltitude_Update
               (DrawPlaneAltitude *this,MethodInfo *method)

{
  pTVar1 = (this->fields).altitudeText;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)
             (*(pTVar1->klass->vtable).get_text.methodPtr)
                       (pTVar1,(pTVar1->klass->vtable).get_text.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DrawPlane);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar3 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
    if ((pDVar3 != (DrawPlaneControllerUUI *)0x0) &&
       (pWVar4 = (pDVar3->fields).worldEditorDrawPlane, pWVar4 != (WorldEditorDrawPlane *)0x0)) {
      iVar5 = (pWVar4->fields)._altitude;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_6[0]._pointer._value = (void *)0x0;
      aRStack_6[0]._length = 0;
      aRStack_6[0]._12_4_ = 0;
      pSVar7 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar5,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pSVar2 == pSVar7) {
        return;
      }
      if ((((pSVar2 != (String *)0x0) && (pSVar7 != (String *)0x0)) &&
          ((pSVar2->fields)._stringLength == (pSVar7->fields)._stringLength)) &&
         (bVar8 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar2->fields)._firstChar,
                             (uint8_t *)&(pSVar7->fields)._firstChar,
                             (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar8 != 0)) {
        return;
      }
      pTVar1 = (this->fields).altitudeText;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__DrawPlane);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar3 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
      if ((pDVar3 != (DrawPlaneControllerUUI *)0x0) &&
         (pWVar4 = (pDVar3->fields).worldEditorDrawPlane, pWVar4 != (WorldEditorDrawPlane *)0x0)) {
        iVar5 = (pWVar4->fields)._altitude;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_6[0]._pointer._value = (void *)0x0;
        aRStack_6[0]._length = 0;
        aRStack_6[0]._12_4_ = 0;
        pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                           (iVar5,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(pTVar1->klass->vtable).set_text.methodPtr)
                    (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

