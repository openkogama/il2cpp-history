
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultGameImages::DefaultGameImages_Equals
               (DefaultGameImages *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__DefaultGameImages);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)0x0;
  if (obj != (Object *)0x0) {
    bVar2 = (TypeInfo__UGUI__Portal__Scripts__DefaultGameImages->_1).naturalAligment;
    if (((obj->klass->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (obj->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
       (Il2CppClass *)TypeInfo__UGUI__Portal__Scripts__DefaultGameImages)) {
      bVar3 = false;
    }
    if (bVar3) {
      pOVar1 = obj;
    }
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar4 = (*(this->klass->vtable).Equals_2.methodPtr)
                    (this,pOVar1,(this->klass->vtable).Equals_2.method);
  return bVar4;
}


/* Boolean Equals(DefaultGameImages) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultGameImages::DefaultGameImages_Equals_1
               (DefaultGameImages *this,DefaultGameImages *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == other) {
    return 1;
  }
  if (other != (DefaultGameImages *)0x0) {
    lVar1 = (*(this->klass->vtable).get_EqualityContract.methodPtr)
                      (this,(this->klass->vtable).get_EqualityContract.method);
    lVar2 = (*(other->klass->vtable).get_EqualityContract.methodPtr)
                      (other,(other->klass->vtable).get_EqualityContract.method);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (lVar1 == lVar2) {
      pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
               EqualityComparer_1_System_Object__get_Default
                         (
                         MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                         );
      if (pEVar3 != (EqualityComparer_1_System_Object_ *)0x0) {
        cVar4 = (*(pEVar3->klass->vtable).__unknown.methodPtr)
                          (pEVar3,(this->fields).small,(other->fields).small,
                           (pEVar3->klass->vtable).__unknown.method);
        if (cVar4 == '\0') {
          return 0;
        }
        pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
                 EqualityComparer_1_System_Object__get_Default
                           (
                           MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                           );
        if (pEVar3 != (EqualityComparer_1_System_Object_ *)0x0) {
          cVar4 = (*(pEVar3->klass->vtable).__unknown.methodPtr)
                            (pEVar3,(this->fields).medium,(other->fields).medium,
                             (pEVar3->klass->vtable).__unknown.method);
          if (cVar4 == '\0') {
            return 0;
          }
          pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
                   EqualityComparer_1_System_Object__get_Default
                             (
                             MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                             );
          if (pEVar3 != (EqualityComparer_1_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar5 = (*(pEVar3->klass->vtable).__unknown.methodPtr)
                              (pEVar3,(this->fields).large,(other->fields).large,
                               (pEVar3->klass->vtable).__unknown.method);
            return bVar5;
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      bVar5 = (*pcVar6)();
      return bVar5;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultGameImages::DefaultGameImages_GetHashCode
                  (DefaultGameImages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__EqualityComparer<System::Type>__get_Default__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
           EqualityComparer_1_System_Object__get_Default
                     (
                     MethodInfo__System__Collections__Generic__EqualityComparer<System::Type>__get_Default__
                     );
  uVar2 = (*(this->klass->vtable).get_EqualityContract.methodPtr)
                    (this,(this->klass->vtable).get_EqualityContract.method);
  if (pEVar1 != (EqualityComparer_1_System_Object_ *)0x0) {
    iVar3 = (*(pEVar1->klass->vtable).__unknown_1.methodPtr)
                      (pEVar1,uVar2,(pEVar1->klass->vtable).__unknown_1.method);
    pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
             EqualityComparer_1_System_Object__get_Default
                       (
                       MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                       );
    if (pEVar1 != (EqualityComparer_1_System_Object_ *)0x0) {
      iVar4 = (*(pEVar1->klass->vtable).__unknown_1.methodPtr)
                        (pEVar1,(this->fields).small,(pEVar1->klass->vtable).__unknown_1.method);
      pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
               EqualityComparer_1_System_Object__get_Default
                         (
                         MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                         );
      if (pEVar1 != (EqualityComparer_1_System_Object_ *)0x0) {
        iVar5 = (*(pEVar1->klass->vtable).__unknown_1.methodPtr)
                          (pEVar1,(this->fields).medium,(pEVar1->klass->vtable).__unknown_1.method);
        pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
                 EqualityComparer_1_System_Object__get_Default
                           (
                           MethodInfo__System__Collections__Generic__EqualityComparer<System::String>__get_Default__
                           );
        if (pEVar1 != (EqualityComparer_1_System_Object_ *)0x0) {
          iVar6 = (*(pEVar1->klass->vtable).__unknown_1.methodPtr)
                            (pEVar1,(this->fields).large,(pEVar1->klass->vtable).__unknown_1.method)
          ;
          return iVar6 + iVar3 * 0x325d7c39 + iVar5 * -0x5aaaaad7 + iVar4 * -0x7c71bf6f;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Boolean PrintMembers(StringBuilder) */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultGameImages::DefaultGameImages_PrintMembers
               (DefaultGameImages *this,StringBuilder *builder,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral___medium___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_small___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___large___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (builder != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (builder,StringLiteral_small___,(MethodInfo *)0x0);
    pSVar1 = (this->fields).small;
    if (pSVar1 != (String *)0x0) {
      pSVar1 = (String *)
               (*(pSVar1->klass->vtable).ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable).ToString.method);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (builder,pSVar1,(MethodInfo *)0x0);
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (builder,StringLiteral___medium___,(MethodInfo *)0x0);
    pSVar1 = (this->fields).medium;
    if (pSVar1 != (String *)0x0) {
      pSVar1 = (String *)
               (*(pSVar1->klass->vtable).ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable).ToString.method);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (builder,pSVar1,(MethodInfo *)0x0);
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (builder,StringLiteral___large___,(MethodInfo *)0x0);
    pSVar1 = (this->fields).large;
    if (pSVar1 != (String *)0x0) {
      pSVar1 = (String *)
               (*(pSVar1->klass->vtable).ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable).ToString.method);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (builder,pSVar1,(MethodInfo *)0x0);
    }
    return 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* String ToString() */

String * Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultGameImages::DefaultGameImages_ToString
                   (DefaultGameImages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DefaultGameImages);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  if (this_00 != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this_00,StringLiteral_DefaultGameImages,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this_00,::StringLiteral____,(MethodInfo *)0x0);
    cVar1 = (*(this->klass->vtable).PrintMembers.methodPtr)(this,this_00);
    if (cVar1 != '\0') {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this_00,0x20,(MethodInfo *)0x0);
    }
    pCVar2 = (this_00->fields).m_ChunkChars;
    if (pCVar2 != (Char__Array *)0x0) {
      if ((this_00->fields).m_ChunkLength < (int)pCVar2->max_length) {
        uVar3 = (this_00->fields).m_ChunkLength;
        pCVar2 = (this_00->fields).m_ChunkChars;
        (this_00->fields).m_ChunkLength = uVar3 + 1;
        if (pCVar2 == (Char__Array *)0x0) goto code_?;
        if ((uint)pCVar2->max_length <= uVar3) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          pSVar5 = (String *)(*pcVar4)();
          return pSVar5;
        }
        pCVar2->vector[(int)uVar3] = 0x7d;
      }
      else {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (this_00,0x7d,1,(MethodInfo *)0x0);
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar5 = (String *)
               (*(this_00->klass->vtable).ToString.methodPtr)
                         (this_00,(this_00->klass->vtable).ToString.method);
      return pSVar5;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* DefaultGameImages <Clone>$() */

DefaultGameImages *
Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultGameImages::DefaultGameImages__Clone__
          (DefaultGameImages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__DefaultGameImages);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (DefaultGameImages *)FUN_?(TypeInfo__UGUI__Portal__Scripts__DefaultGameImages);
  if (this == (DefaultGameImages *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar1 = (DefaultGameImages *)(*pcVar2)();
    return pDVar1;
  }
  (pDVar1->fields).small = (this->fields).small;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pDVar1->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  (pDVar1->fields).medium = (this->fields).medium;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(pDVar1->fields).medium >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (pDVar1->fields).large = (this->fields).large;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(pDVar1->fields).large >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return pDVar1;
}


/* DefaultGameImages(DefaultGameImages) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultGameImages::DefaultGameImages__ctor
               (DefaultGameImages *this,DefaultGameImages *original,MethodInfo *method)

{
  iVar1 = iRam_?;
  if (original == (DefaultGameImages *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->fields).small = (original->fields).small;
  if (iVar1 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).medium = (original->fields).medium;
  iVar8 = 0;
  if (iVar1 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).medium >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).large = (original->fields).large;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).large >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}


/* DefaultGameImages() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultGameImages::DefaultGameImages__ctor_1
               (DefaultGameImages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_placeholder_game_small_180x100_j);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_placeholder_game_large_600x240_j);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_placeholder_game_medium_350x194_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).small = StringLiteral_placeholder_game_small_180x100_j;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).medium = StringLiteral_placeholder_game_medium_350x194_;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).medium >> 0xc);
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
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).large = StringLiteral_placeholder_game_large_600x240_j;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).large >> 0xc);
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
  return;
}


/* Type get_EqualityContract() */

Type * Assembly-CSharp.dll::UGUI::Portal::Scripts::DefaultGameImages::
       DefaultGameImages_get_EqualityContract(DefaultGameImages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__UGUI__Portal__Scripts__DefaultGameImages);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__UGUI__Portal__Scripts__DefaultGameImages;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar2 = FUN_?(pIVar1,1);
    lVar2 = lVar2 + 0x20;
    apTStackX_10[0] = (Type *)0x0;
    lStackX_8 = lVar2;
    cVar3 = FUN_?(lVar2,&lStackX_8,apTStackX_10,in_R9,unaff_RBX);
    if (cVar3 != '\0') {
      return apTStackX_10[0];
    }
    lVar4 = FUN_?(uRam_?);
    *(longlong *)(lVar4 + 0x10) = lVar2;
    pTVar5 = (Type *)FUN_?();
    return pTVar5;
  }
  return (Type *)0x0;
}

