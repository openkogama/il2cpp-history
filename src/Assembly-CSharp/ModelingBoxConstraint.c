
/* Boolean CanAddCubeAt(IntVector) */

bool Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_CanAddCubeAt
               (ModelingBoxConstraint *this,IntVector *pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = (this->fields).minCorner.x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStackX_8 = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  if (iVar2 <= pos->x) {
    OVar1 = (this->fields).minCorner.y;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    OStackX_8 = OVar1;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    if (iVar2 <= pos->y) {
      OVar1 = (this->fields).minCorner.z;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      OStackX_8 = OVar1;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
              ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
      if (iVar2 <= pos->z) {
        OVar1 = (this->fields).maxCorner.x;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                ObscuredShort_op_Implicit_1(OVar1,(MethodInfo *)0x0);
        if (pos->x <= iVar2) {
          OVar1 = (this->fields).maxCorner.y;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                  ::ObscuredShort_op_Implicit_1(OVar1,(MethodInfo *)0x0);
          if (pos->y <= iVar2) {
            OVar1 = (this->fields).maxCorner.z;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredShort::ObscuredShort_op_Implicit_1(OVar1,(MethodInfo *)0x0);
            if (pos->z <= iVar2) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


/* Void ChangeBox(IntVector, IntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_ChangeBox
               (ModelingBoxConstraint *this,IntVector *minCorner,IntVector *maxCorner,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ConstraintBoxChangedEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(minCorner->x,(MethodInfo *)0x0);
  value = minCorner->y;
  OVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(value,(MethodInfo *)0x0);
  OVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
           ObscuredShort_op_Implicit(minCorner->z,(MethodInfo *)0x0);
  bVar4 = cRam_? == '\0';
  uStack_5 = OVar1._0_4_;
  uStack_6 = OVar1._4_4_;
  uStack_7 = OVar2._0_4_;
  uStack_8 = OVar2._4_4_;
  (this->fields).minCorner.x.currentCryptoKey = (undefined2)uStack_5;
  (this->fields).minCorner.x.hiddenValue = uStack_5._2_2_;
  (this->fields).minCorner.x.fakeValue = (undefined2)uStack_6;
  (this->fields).minCorner.x.inited = uStack_6._2_1_;
  (this->fields).minCorner.x.field_0x7 = uStack_6._3_1_;
  (this->fields).minCorner.y.currentCryptoKey = (undefined2)uStack_7;
  (this->fields).minCorner.y.hiddenValue = uStack_7._2_2_;
  (this->fields).minCorner.y.fakeValue = (undefined2)uStack_8;
  (this->fields).minCorner.y.inited = uStack_8._2_1_;
  (this->fields).minCorner.y.field_0x7 = uStack_8._3_1_;
  (this->fields).minCorner.z = OVar3;
  if (bVar4) {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(maxCorner->x,(MethodInfo *)0x0);
  value_00 = maxCorner->y;
  OVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
          ObscuredShort_op_Implicit(value_00,(MethodInfo *)0x0);
  OVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
           ObscuredShort_op_Implicit(maxCorner->z,(MethodInfo *)0x0);
  uStack_5 = OVar1._0_4_;
  uStack_6 = OVar1._4_4_;
  uStack_7 = OVar2._0_4_;
  uStack_8 = OVar2._4_4_;
  (this->fields).maxCorner.x.currentCryptoKey = (undefined2)uStack_5;
  (this->fields).maxCorner.x.hiddenValue = uStack_5._2_2_;
  (this->fields).maxCorner.x.fakeValue = (undefined2)uStack_6;
  (this->fields).maxCorner.x.inited = uStack_6._2_1_;
  (this->fields).maxCorner.x.field_0x7 = uStack_6._3_1_;
  (this->fields).maxCorner.y.currentCryptoKey = (undefined2)uStack_7;
  (this->fields).maxCorner.y.hiddenValue = uStack_7._2_2_;
  (this->fields).maxCorner.y.fakeValue = (undefined2)uStack_8;
  (this->fields).maxCorner.y.inited = uStack_8._2_1_;
  (this->fields).maxCorner.y.field_0x7 = uStack_8._3_1_;
  (this->fields).maxCorner.z = OVar3;
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  sVar9 = minCorner->x;
  sVar10 = minCorner->y;
  sVar11 = minCorner->z;
  sVar12 = maxCorner->x;
  (this->fields)._FMinCorner_k__BackingField.x = (float)(int)sVar9;
  (this->fields)._FMinCorner_k__BackingField.y = (float)(int)sVar10;
  sVar13 = maxCorner->y;
  sVar14 = maxCorner->z;
  (this->fields)._FMaxCorner_k__BackingField.x = (float)(int)sVar12;
  (this->fields)._FMaxCorner_k__BackingField.y = (float)(int)sVar13;
  (this->fields)._FMaxCorner_k__BackingField.z = (float)(int)sVar14;
  (this->fields)._FMinCorner_k__BackingField.z = (float)(int)sVar11;
  fVar15 = ((float)(int)sVar12 + (float)(int)sVar9) * _UNK_?;
  fVar16 = ((float)(int)sVar13 + (float)(int)sVar10) * _UNK_?;
  fVar17 = ((float)(int)sVar14 + (float)(int)sVar11) * _UNK_?;
  (this->fields).center.x = fVar15;
  (this->fields).center.y = fVar16;
  (this->fields).center.z = fVar17;
  lVar18 = FUN_?(TypeInfo__ConstraintBoxChangedEventArgs);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  *(undefined4 *)(lVar18 + 0x1c) = *(undefined4 *)minCorner;
  *(int16_t *)(lVar18 + 0x20) = minCorner->z;
  *(undefined4 *)(lVar18 + 0x22) = *(undefined4 *)maxCorner;
  iVar19 = maxCorner->z;
  *(ulonglong *)(lVar18 + 0x10) = CONCAT44(fVar16,fVar15);
  *(int16_t *)(lVar18 + 0x26) = iVar19;
  *(float *)(lVar18 + 0x18) = fVar17;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).OnBoxChanged.methodPtr)
            (this,lVar18,(this->klass->vtable).OnBoxChanged.method);
  return;
}


/* Void OnBoxChanged(ConstraintBoxChangedEventArgs) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_OnBoxChanged
               (ModelingBoxConstraint *this,ConstraintBoxChangedEventArgs *args,MethodInfo *method)

{
  pEVar1 = (this->fields).BoxChanged;
  if (pEVar1 != (EventHandler_1_ConstraintBoxChangedEventArgs_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,args,(pEVar1->fields)._._.method);
    return;
  }
  FUN_?(0,this,args);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ModelingBoxConstraint(IntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint__ctor
               (ModelingBoxConstraint *this,IntVector *size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Size_parameter_fields_shouldn_t_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = size->x;
  uVar2 = size->y;
  aIStack_3[0].y = (short)-uVar2 / 2;
  aIStack_3[0].x = (short)-uVar1 / 2;
  aIStack_3[0].z = -size->z / 2;
  IStackX_10.x = size->x;
  IStackX_10.y = size->y;
  uVar4 = size->x;
  IStackX_10.z = size->z;
  aIStack_5[0].x = (short)uVar4 / 2;
  aIStack_5[0].y = IStackX_10.y / 2;
  aIStack_5[0].z = IStackX_10.z / 2;
  ModelingBoxConstraint__ctor_1(this,aIStack_3,aIStack_5,(MethodInfo *)0x0);
  uVar6 = (int)size->x & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  if (uVar6 != 1) {
    uVar6 = (int)size->y & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    if (uVar6 != 1) {
      uVar6 = (int)size->z & 0x80000001;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
      }
      if (uVar6 != 1) {
        return;
      }
    }
  }
  IStackX_10.x = size->x;
  IStackX_10.y = size->y;
  IStackX_10.z = size->z;
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar7 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                     (&IStackX_10,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Size_parameter_fields_shouldn_t_,pSVar7,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar7,(MethodInfo *)0x0);
  return;
}


/* ModelingBoxConstraint(IntVector, IntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint__ctor_1
               (ModelingBoxConstraint *this,IntVector *minCorner,IntVector *maxCorner,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ModelingBoxConstraint____c____ctor_b__24_0_System__Object__ConstraintBoxChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModelingBoxConstraint____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ModelingBoxConstraint____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__ModelingBoxConstraint____c->static_fields->__9__24_0;
  if (this_00 == (EventHandler_1_ConstraintBoxChangedEventArgs_ *)0x0) {
    if (*(int *)&(TypeInfo__ModelingBoxConstraint____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__ModelingBoxConstraint____c->static_fields->__9;
    this_00 = (EventHandler_1_ConstraintBoxChangedEventArgs_ *)
              FUN_?(TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)this_00,(Object *)object,
               MethodInfo__ModelingBoxConstraint____c____ctor_b__24_0_System__Object__ConstraintBoxChangedEventArgs_
               ,(MethodInfo *)0x0);
    TypeInfo__ModelingBoxConstraint____c->static_fields->__9__24_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__ModelingBoxConstraint____c->static_fields->__9__24_0 >>
                    0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (this == (ModelingBoxConstraint *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar5 = iRam_? != 0;
  (this->fields).BoxChanged = this_00;
  if (bVar5) {
    uVar1 = (uint)((ulonglong)&(this->fields).BoxChanged >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  aIStack_7[0].x = maxCorner->x;
  aIStack_7[0].y = maxCorner->y;
  aIStack_7[0].z = maxCorner->z;
  aIStack_8[0].x = minCorner->x;
  aIStack_8[0].y = minCorner->y;
  aIStack_8[0].z = minCorner->z;
  ModelingBoxConstraint_ChangeBox(this,aIStack_8,aIStack_7,(MethodInfo *)0x0);
  return;
}


/* Void add_BoxChanged(EventHandler`1[ConstraintBoxChangedEventArgs]) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_add_BoxChanged
               (ModelingBoxConstraint *this,EventHandler_1_ConstraintBoxChangedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).BoxChanged;
  a = (this->fields).BoxChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ConstraintBoxChangedEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ConstraintBoxChangedEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
      if (pEVar4 == (EventHandler_1_ConstraintBoxChangedEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_get_Center
                    (Vector3 *__return_storage_ptr__,ModelingBoxConstraint *this,MethodInfo *method)

{
  fVar1 = (this->fields).center.z;
  fVar2 = (this->fields).center.y;
  __return_storage_ptr__->x = (this->fields).center.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void remove_BoxChanged(EventHandler`1[ConstraintBoxChangedEventArgs]) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_remove_BoxChanged
               (ModelingBoxConstraint *this,EventHandler_1_ConstraintBoxChangedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).BoxChanged;
  source = (this->fields).BoxChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ConstraintBoxChangedEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ConstraintBoxChangedEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
      if (pEVar4 == (EventHandler_1_ConstraintBoxChangedEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_Center
               (ModelingBoxConstraint *this,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ConstraintBoxChangedEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).center.x;
  uVar2 = (this->fields).center.y;
  uVar3 = value->x;
  uVar4 = value->y;
  fVar5 = (this->fields).center.z - value->z;
  if (_UNK_? <=
      ((float)uVar2 - (float)uVar4) * ((float)uVar2 - (float)uVar4) +
      ((float)uVar1 - (float)uVar3) * ((float)uVar1 - (float)uVar3) + fVar5 * fVar5) {
    fVar6 = value->y;
    fVar5 = value->z;
    (this->fields).center.x = value->x;
    (this->fields).center.y = fVar6;
    (this->fields).center.z = fVar5;
    OVar7 = (this->fields).minCorner.x;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    OStackX_8 = OVar7;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    OStackX_8 = (this->fields).minCorner.y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    OStackX_8 = (this->fields).minCorner.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    OStackX_10 = (this->fields).maxCorner.x;
    OStackX_8.currentCryptoKey = iVar10;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_InternalDecrypt(&OStackX_10,(MethodInfo *)0x0);
    OStackX_10 = (this->fields).maxCorner.y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_10,(MethodInfo *)0x0);
    OStackX_10 = (this->fields).maxCorner.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_10,(MethodInfo *)0x0);
    lVar13 = FUN_?(TypeInfo__ConstraintBoxChangedEventArgs);
    uStack_14 = CONCAT22(iVar11,iVar10);
    uStack_15 = CONCAT22(iVar9,iVar8);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar5 = value->z;
    *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)value;
    *(float *)(lVar13 + 0x18) = fVar5;
    *(undefined4 *)(lVar13 + 0x1c) = uStack_15;
    *(int16_t *)(lVar13 + 0x20) = OStackX_8.currentCryptoKey;
    *(undefined4 *)(lVar13 + 0x22) = uStack_14;
    *(int16_t *)(lVar13 + 0x26) = iVar12;
    (*(this->klass->vtable).OnBoxChanged.methodPtr)
              (this,lVar13,(this->klass->vtable).OnBoxChanged.method);
  }
  return;
}


/* Void set_FMaxCorner(Vector3) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_FMaxCorner
               (ModelingBoxConstraint *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._FMaxCorner_k__BackingField.x = value->x;
  (this->fields)._FMaxCorner_k__BackingField.y = fVar1;
  (this->fields)._FMaxCorner_k__BackingField.z = fVar2;
  return;
}


/* Void set_MaxCorner(ObscuredIntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_MaxCorner
               (ModelingBoxConstraint *this,ObscuredIntVector *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ConstraintBoxChangedEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1 = *(undefined1 (*) [8])&(this->fields).maxCorner.x;
  OStack_2 = (this->fields).maxCorner.y;
  OStackX_8 = (this->fields).maxCorner.z;
  if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar3 = OStack_2;
  fStack_4 = (float)auStack_1._0_4_;
  fStack_5 = (float)auStack_1._4_4_;
  fStack_6 = (float)OStack_2._0_4_;
  iStack_7 = OStack_2.fakeValue;
  bStack_8 = OStack_2.inited;
  uStack_9 = OStack_2._7_1_;
  OStack_10 = OStackX_8;
  OStack_2 = OVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_1 = *(undefined1 (*) [8])&value->x;
  OStack_2 = value->y;
  OStack_11 = value->z;
  bVar12 = ObscuredIntVector::ObscuredIntVector_Equals_1
                    ((ObscuredIntVector *)&fStack_4,(ObscuredIntVector *)auStack_1,
                     (MethodInfo *)0x0);
  if (bVar12 == 0) {
    iVar13 = (value->x).hiddenValue;
    iVar14 = (value->x).fakeValue;
    bVar12 = (value->x).inited;
    uVar15 = (value->x).field_0x7;
    iVar16 = (value->y).currentCryptoKey;
    iVar17 = (value->y).hiddenValue;
    iVar18 = (value->y).fakeValue;
    bVar19 = (value->y).inited;
    uVar20 = (value->y).field_0x7;
    OVar3 = value->z;
    (this->fields).maxCorner.x.currentCryptoKey = (value->x).currentCryptoKey;
    (this->fields).maxCorner.x.hiddenValue = iVar13;
    (this->fields).maxCorner.x.fakeValue = iVar14;
    (this->fields).maxCorner.x.inited = bVar12;
    (this->fields).maxCorner.x.field_0x7 = uVar15;
    (this->fields).maxCorner.y.currentCryptoKey = iVar16;
    (this->fields).maxCorner.y.hiddenValue = iVar17;
    (this->fields).maxCorner.y.fakeValue = iVar18;
    (this->fields).maxCorner.y.inited = bVar19;
    (this->fields).maxCorner.y.field_0x7 = uVar20;
    (this->fields).maxCorner.z = OVar3;
    if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar21 = ObscuredIntVector::ObscuredIntVector_ToVector3
                        ((Vector3 *)auStack_1,&(this->fields).maxCorner,(MethodInfo *)0x0);
    fVar22 = pVVar21->y;
    fVar23 = pVVar21->z;
    fStackX_10 = (this->fields).center.z;
    (this->fields)._FMinCorner_k__BackingField.x = pVVar21->x;
    (this->fields)._FMinCorner_k__BackingField.y = fVar22;
    auStack_1 = *(undefined1 (*) [8])&(this->fields).center;
    (this->fields)._FMinCorner_k__BackingField.z = fVar23;
    OVar3 = (this->fields).minCorner.x;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    OStackX_8 = OVar3;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    OStackX_8 = (this->fields).minCorner.y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    OStackX_8 = (this->fields).minCorner.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    OStackX_20 = (this->fields).maxCorner.x;
    OStackX_8.currentCryptoKey = iVar16;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_20,(MethodInfo *)0x0);
    OStackX_20 = (this->fields).maxCorner.y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_20,(MethodInfo *)0x0);
    OStackX_20 = (this->fields).maxCorner.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_20,(MethodInfo *)0x0);
    lVar24 = FUN_?(TypeInfo__ConstraintBoxChangedEventArgs);
    uStack_25 = CONCAT22(iVar17,iVar16);
    uStack_26 = CONCAT22(iVar14,iVar13);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar27 = (ObscuredShort *)(lVar24 + 0x10);
    pOVar27->currentCryptoKey = auStack_1._0_2_;
    pOVar27->hiddenValue = auStack_1._2_2_;
    pOVar27->fakeValue = auStack_1._4_2_;
    pOVar27->inited = auStack_1[6];
    pOVar27->field_0x7 = auStack_1[7];
    *(float *)(lVar24 + 0x18) = fStackX_10;
    *(undefined4 *)(lVar24 + 0x1c) = uStack_26;
    *(int16_t *)(lVar24 + 0x20) = OStackX_8.currentCryptoKey;
    *(undefined4 *)(lVar24 + 0x22) = uStack_25;
    *(int16_t *)(lVar24 + 0x26) = iVar18;
    (*(this->klass->vtable).OnBoxChanged.methodPtr)
              (this,lVar24,(this->klass->vtable).OnBoxChanged.method);
  }
  return;
}


/* Void set_MinCorner(ObscuredIntVector) */

void Assembly-CSharp.dll::ModelingBoxConstraint::ModelingBoxConstraint_set_MinCorner
               (ModelingBoxConstraint *this,ObscuredIntVector *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ConstraintBoxChangedEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1 = *(undefined1 (*) [8])&(this->fields).minCorner.x;
  OStack_2 = (this->fields).minCorner.y;
  OStackX_8 = (this->fields).minCorner.z;
  if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar3 = OStack_2;
  fStack_4 = (float)auStack_1._0_4_;
  fStack_5 = (float)auStack_1._4_4_;
  fStack_6 = (float)OStack_2._0_4_;
  iStack_7 = OStack_2.fakeValue;
  bStack_8 = OStack_2.inited;
  uStack_9 = OStack_2._7_1_;
  OStack_10 = OStackX_8;
  OStack_2 = OVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObscuredIntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_1 = *(undefined1 (*) [8])&value->x;
  OStack_2 = value->y;
  OStack_11 = value->z;
  bVar12 = ObscuredIntVector::ObscuredIntVector_Equals_1
                    ((ObscuredIntVector *)&fStack_4,(ObscuredIntVector *)auStack_1,
                     (MethodInfo *)0x0);
  if (bVar12 == 0) {
    iVar13 = (value->x).hiddenValue;
    iVar14 = (value->x).fakeValue;
    bVar12 = (value->x).inited;
    uVar15 = (value->x).field_0x7;
    iVar16 = (value->y).currentCryptoKey;
    iVar17 = (value->y).hiddenValue;
    iVar18 = (value->y).fakeValue;
    bVar19 = (value->y).inited;
    uVar20 = (value->y).field_0x7;
    OVar3 = value->z;
    (this->fields).minCorner.x.currentCryptoKey = (value->x).currentCryptoKey;
    (this->fields).minCorner.x.hiddenValue = iVar13;
    (this->fields).minCorner.x.fakeValue = iVar14;
    (this->fields).minCorner.x.inited = bVar12;
    (this->fields).minCorner.x.field_0x7 = uVar15;
    (this->fields).minCorner.y.currentCryptoKey = iVar16;
    (this->fields).minCorner.y.hiddenValue = iVar17;
    (this->fields).minCorner.y.fakeValue = iVar18;
    (this->fields).minCorner.y.inited = bVar19;
    (this->fields).minCorner.y.field_0x7 = uVar20;
    (this->fields).minCorner.z = OVar3;
    if (*(int *)&(TypeInfo__ObscuredIntVector->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar21 = ObscuredIntVector::ObscuredIntVector_ToVector3
                        ((Vector3 *)auStack_1,&(this->fields).minCorner,(MethodInfo *)0x0);
    fVar22 = pVVar21->y;
    fVar23 = pVVar21->z;
    fStackX_10 = (this->fields).center.z;
    (this->fields)._FMinCorner_k__BackingField.x = pVVar21->x;
    (this->fields)._FMinCorner_k__BackingField.y = fVar22;
    auStack_1 = *(undefined1 (*) [8])&(this->fields).center;
    (this->fields)._FMinCorner_k__BackingField.z = fVar23;
    OVar3 = (this->fields).minCorner.x;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    OStackX_8 = OVar3;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
            ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    OStackX_8 = (this->fields).minCorner.y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    OStackX_8 = (this->fields).minCorner.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
    OStackX_20 = (this->fields).maxCorner.x;
    OStackX_8.currentCryptoKey = iVar16;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_20,(MethodInfo *)0x0);
    OStackX_20 = (this->fields).maxCorner.y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_20,(MethodInfo *)0x0);
    OStackX_20 = (this->fields).maxCorner.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_InternalDecrypt(&OStackX_20,(MethodInfo *)0x0);
    lVar24 = FUN_?(TypeInfo__ConstraintBoxChangedEventArgs);
    uStack_25 = CONCAT22(iVar17,iVar16);
    uStack_26 = CONCAT22(iVar14,iVar13);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar27 = (ObscuredShort *)(lVar24 + 0x10);
    pOVar27->currentCryptoKey = auStack_1._0_2_;
    pOVar27->hiddenValue = auStack_1._2_2_;
    pOVar27->fakeValue = auStack_1._4_2_;
    pOVar27->inited = auStack_1[6];
    pOVar27->field_0x7 = auStack_1[7];
    *(float *)(lVar24 + 0x18) = fStackX_10;
    *(undefined4 *)(lVar24 + 0x1c) = uStack_26;
    *(int16_t *)(lVar24 + 0x20) = OStackX_8.currentCryptoKey;
    *(undefined4 *)(lVar24 + 0x22) = uStack_25;
    *(int16_t *)(lVar24 + 0x26) = iVar18;
    (*(this->klass->vtable).OnBoxChanged.methodPtr)
              (this,lVar24,(this->klass->vtable).OnBoxChanged.method);
  }
  return;
}

