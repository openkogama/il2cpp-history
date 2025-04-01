
/* String Generate(String, IEnumerable`1[System.String]) */

String * Assembly-CSharp.dll::RTG::UniqueNameGen::UniqueNameGen_Generate
                   (String *desiredName,IEnumerable_1_System_String_ *existingNames,
                   MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<System::String>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<System::String>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  piStack_6 = (int *)0x0;
  pSStack_7 = desiredName;
  IStack_8.m_value = 0;
  while (uStack_9 = 0, existingNames != (IEnumerable_1_System_String_ *)0x0) {
    pIVar10 = existingNames->klass;
    uVar11 = 0;
    uVar12._0_1_ = (pIVar10->_1).rank;
    uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
    if (uVar12 != 0) {
      do {
        if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerable<System::String>) {
          ppMVar13 = &(&pIVar10->vtable)[pIVar10->interfaceOffsets[uVar11].offset].GetEnumerator.method
          ;
          goto code_?;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
    ppMVar13 = (MethodInfo **)
              func_?(existingNames,
                              TypeInfo__System__Collections__Generic__IEnumerable<System::String>,0)
    ;
code_?:
    piStack_6 = (int *)(*(code *)*ppMVar13)(existingNames,ppMVar13[1]);
    uStack_1 = 1;
    do {
      piVar14 = piStack_6;
      if (piStack_6 == (int *)0x0) goto code_?;
      uVar11 = 0;
      uVar12 = *(ushort *)(*piStack_6 + 0xb6);
      if (uVar12 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piStack_6 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar15 = (undefined4 *)
                     (*piStack_6 +
                     (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar11 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar15 = (undefined4 *)
               func_?(piStack_6,TypeInfo__System__Collections__IEnumerator,0);
code_?:
      cVar16 = (*(code *)*puVar15)(piVar14,puVar15[1]);
      piVar14 = piStack_6;
      if (cVar16 == '\0') {
        uStack_1 = 0xffffffff;
        if (piStack_6 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piStack_6);
        }
        *unaff_FS_OFFSET = uStack_3;
        return pSStack_7;
      }
      if (piStack_6 == (int *)0x0) goto code_?;
      uVar11 = 0;
      uVar12 = *(ushort *)(*piStack_6 + 0xb6);
      if (uVar12 != 0) {
        do {
          if (*(IEnumerator_1_System_String___Class **)
               (*(int *)(*piStack_6 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::String>) {
            puVar15 = (undefined4 *)
                     (*piStack_6 +
                     (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar11 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar15 = (undefined4 *)
               func_?(piStack_6,
                               TypeInfo__System__Collections__Generic__IEnumerator<System::String>,0
                              );
code_?:
      pSVar17 = (String *)(*(code *)*puVar15)(piVar14,puVar15[1]);
      bVar18 = mscorlib.dll::System::String::String_op_Equality(pSVar17,pSStack_7,(MethodInfo *)0x0)
      ;
    } while (bVar18 == 0);
    pSVar17 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
    pSStack_7 = mscorlib.dll::System::String::String_Concat_3
                           (desiredName,pSVar17,(MethodInfo *)0x0);
    uStack_9 = 1;
    IStack_8.m_value = IStack_8.m_value + 1;
    uStack_1 = 0xffffffff;
    if (piStack_6 != (int *)0x0) {
      func_?();
    }
    uStack_1 = 0xffffffff;
    if (IStack_8.m_value == 0x7fffffff) {
      *unaff_FS_OFFSET = uStack_3;
      return pSStack_7;
    }
  }
code_?:
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  pSVar17 = (String *)(*pcVar20)();
  return pSVar17;
}

