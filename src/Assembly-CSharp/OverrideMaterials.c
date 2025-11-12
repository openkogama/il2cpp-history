
/* Void Register() */

void Assembly-CSharp.dll::OverrideMaterials::OverrideMaterials_Register
               (OverrideMaterials *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).overrideMaterials;
  if ((List_1_OverrideMaterial_ *)LStack_1._list == (List_1_OverrideMaterial_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_OverrideMaterial_ *)LStack_1._list)->fields)._version <<
               0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if ((OverrideMaterial *)LStack_1._current == (OverrideMaterial *)0x0) break;
    OverrideMaterial::OverrideMaterial_Register
              ((OverrideMaterial *)LStack_1._current,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::OverrideMaterials::OverrideMaterials_Update
               (OverrideMaterials *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<OverrideMaterial>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__StreamWriter);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dumping_override_materials_to_sq);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Materials_txt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStackX_18 = (StreamWriter *)0x0;
  if ((this->fields).dumpToSql != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Dumping_override_materials_to_sq,(MethodInfo *)0x0);
    str0 = ::StringLiteral__;
    pSStackX_20 = ::StringLiteral__;
    LStack_1._list = (List_1_System_Object_ *)(this->fields).overrideMaterials;
    if ((List_1_OverrideMaterial_ *)LStack_1._list == (List_1_OverrideMaterial_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(((List_1_OverrideMaterial_ *)LStack_1._list)->fields)._version
                 << 0x20);
    uStack_9 = 0;
    LStack_1._8_8_ = pLStack_8;
    LStack_1._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_1;
    while (pSStackX_20 = str0,
          bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<OverrideMaterial>__MoveNext__
                            ), bVar10 != 0) {
      if (LStack_1._current == (Object *)0x0) {
        str1 = (String *)0x0;
      }
      else {
        str1 = (String *)
               (*((LStack_1._current)->klass->vtable).ToString.methodPtr)
                         (LStack_1._current,((LStack_1._current)->klass->vtable).ToString.method);
      }
      str0 = mscorlib.dll::System::String::String_Concat_4(str0,str1,(MethodInfo *)0x0);
    }
    this_00 = (StreamWriter *)FUN_?(TypeInfo__System__IO__StreamWriter);
    mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_5
              (this_00,StringLiteral_Materials_txt,0,(MethodInfo *)0x0);
    uStack_4 = 0;
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)&pSStackX_18;
    pSStackX_18 = this_00;
    if (this_00 == (StreamWriter *)0x0) {
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(this_00->klass->vtable).WriteLine_1.methodPtr)
              (this_00,str0,(this_00->klass->vtable).WriteLine_1.method);
    if (pSStackX_18 != (StreamWriter *)0x0) {
      FUN_?(0,TypeInfo__System__IDisposable);
    }
    (this->fields).dumpToSql = 0;
  }
  return;
}


/* OverrideMaterials() */

void Assembly-CSharp.dll::OverrideMaterials::OverrideMaterials__ctor
               (OverrideMaterials *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<OverrideMaterial>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<OverrideMaterial>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_OverrideMaterial_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<OverrideMaterial>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<OverrideMaterial>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).overrideMaterials = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).overrideMaterials >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

