
/* String Generate(String, IEnumerable`1[System.String]) */

String * Assembly-CSharp.dll::RTG::UniqueNameGen::UniqueNameGen_Generate
                   (String *desiredName,IEnumerable_1_System_String_ *existingNames,
                   MethodInfo *method)

{
  pIStack_1 = existingNames;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar2 = 0;
  plStack_3 = (longlong *)0x0;
  aIStack_4[0].m_value = 0;
  pIVar5 = existingNames;
  pSVar6 = desiredName;
  pSStack_7 = desiredName;
  while (existingNames != (IEnumerable_1_System_String_ *)0x0) {
    pIVar8 = pIVar5->klass;
    uVar9 = 0;
    uVar10._0_1_ = (pIVar8->_1).rank;
    uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
    if (uVar10 != 0) {
      uVar11 = uVar9;
      do {
        if (pIVar8->interfaceOffsets[uVar11].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerable<System::String>) {
          pVVar12 = &(&pIVar8->vtable)[pIVar8->interfaceOffsets[uVar11].offset].GetEnumerator;
          goto code_?;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
    }
    pVVar12 = (VirtualInvokeData *)
             FUN_?(existingNames,
                           TypeInfo__System__Collections__Generic__IEnumerable<System::String>);
code_?:
    plStack_3 = (longlong *)(*pVVar12->methodPtr)(existingNames,pVVar12->method);
    uStack_13 = 0;
    pplStack_14 = &plStack_3;
    do {
      plVar15 = plStack_3;
      if (plStack_3 == (longlong *)0x0) goto code_?;
      lVar16 = *plStack_3;
      if (*(ushort *)(lVar16 + 0x12e) != 0) {
        uVar10 = uVar9;
        do {
          if (*(IEnumerator__Class **)(*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar17 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10)
                      * 0x10 + 0x138 + lVar16);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar16 + 0x12e));
      }
      puVar17 = (undefined8 *)FUN_?(plStack_3,TypeInfo__System__Collections__IEnumerator);
code_?:
      cVar18 = (*(code *)*puVar17)(plVar15,puVar17[1]);
      plVar15 = plStack_3;
      if (cVar18 == '\0') {
        if (plStack_3 == (longlong *)0x0) {
          return pSVar6;
        }
        FUN_?(0,TypeInfo__System__IDisposable,plStack_3);
        return pSVar6;
      }
      if (plStack_3 == (longlong *)0x0) goto code_?;
      lVar16 = *plStack_3;
      if (*(ushort *)(lVar16 + 0x12e) != 0) {
        uVar10 = uVar9;
        do {
          if (*(IEnumerator_1_System_String___Class **)
               (*(longlong *)(lVar16 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::String>) {
            puVar17 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar16 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10)
                      * 0x10 + 0x138 + lVar16);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar16 + 0x12e));
      }
      puVar17 = (undefined8 *)
               FUN_?(plStack_3,
                             TypeInfo__System__Collections__Generic__IEnumerator<System::String>);
code_?:
      pSVar19 = (String *)(*(code *)*puVar17)(plVar15);
    } while ((pSVar19 != pSVar6) &&
            ((((pSVar19 == (String *)0x0 || (pSVar6 == (String *)0x0)) ||
              ((pSVar19->fields)._stringLength != (pSVar6->fields)._stringLength)) ||
             (bVar20 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(pSVar19->fields)._firstChar,
                                 (uint8_t *)&(pSVar6->fields)._firstChar,
                                 (longlong)(pSVar19->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar20 == 0))));
    pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(aIStack_4,(MethodInfo *)0x0);
    pSVar6 = mscorlib.dll::System::String::String_Concat_4(desiredName,pSVar6,(MethodInfo *)0x0);
    iVar2 = iVar2 + 1;
    aIStack_4[0].m_value = iVar2;
    pSStack_7 = pSVar6;
    if (plStack_3 != (longlong *)0x0) {
      FUN_?(0,TypeInfo__System__IDisposable);
    }
    pIVar5 = pIStack_1;
    if (iVar2 == 0x7fffffff) {
      return pSVar6;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar21 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar21)();
  return pSVar6;
}

