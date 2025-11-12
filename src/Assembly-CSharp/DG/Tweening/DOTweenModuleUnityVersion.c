
/* Task AsyncWaitForCompletion(Tween) */

Task * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
       DOTweenModuleUnityVersion_AsyncWaitForCompletion(Tween *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForCompletion_d__10>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForCompletion_d__10__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1.__1__state = 0;
  DStack_1._4_4_ = 0;
  DStack_1.t = (Tween *)0x0;
  uStack_2 = 0;
  if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  DStack_1.__t__builder.m_builder.m_coreState.m_stateMachine = (IAsyncStateMachine *)0x0;
  DStack_1.__t__builder.m_builder.m_coreState.m_defaultContextAction = (Action *)0x0;
  DStack_1.__t__builder.m_builder.m_task = (Task_1_VoidTaskResult_ *)0x0;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&DStack_1.__t__builder >> 0xc);
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
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&DStack_1.t >> 0xc);
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
  DStack_1.__1__state = -1;
  DStack_1.t = t;
  mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::
  AsyncTaskMethodBuilder_Start_4
            (&DStack_1.__t__builder,&DStack_1,
             void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForCompletion_d__10>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForCompletion_d__10__
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar8 = (Task *)FUN_?(&DStack_1.__t__builder,
                                 MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                                );
  return pTVar8;
}


/* Task AsyncWaitForElapsedLoops(Tween, Int32) */

Task * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
       DOTweenModuleUnityVersion_AsyncWaitForElapsedLoops
                 (Tween *t,int32_t elapsedLoops,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForElapsedLoops_d__13>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForElapsedLoops_d__13__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1.__1__state = 0;
  DStack_1._4_4_ = 0;
  DStack_1.t = (Tween *)0x0;
  DStack_1.elapsedLoops = 0;
  DStack_1._44_4_ = 0;
  if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  DStack_1.__t__builder.m_builder.m_coreState.m_stateMachine = (IAsyncStateMachine *)0x0;
  DStack_1.__t__builder.m_builder.m_coreState.m_defaultContextAction = (Action *)0x0;
  DStack_1.__t__builder.m_builder.m_task = (Task_1_VoidTaskResult_ *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&DStack_1.__t__builder >> 0xc);
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
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&DStack_1.t >> 0xc);
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
  DStack_1.elapsedLoops = elapsedLoops;
  DStack_1.__1__state = -1;
  DStack_1.t = t;
  mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::
  AsyncTaskMethodBuilder_Start_5
            (&DStack_1.__t__builder,&DStack_1,
             void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForElapsedLoops_d__13>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForElapsedLoops_d__13__
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar7 = (Task *)FUN_?(&DStack_1.__t__builder,
                                 MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                                );
  return pTVar7;
}


/* Task AsyncWaitForKill(Tween) */

Task * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
       DOTweenModuleUnityVersion_AsyncWaitForKill(Tween *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForKill_d__12>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForKill_d__12__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1.__1__state = 0;
  DStack_1._4_4_ = 0;
  DStack_1.t = (Tween *)0x0;
  uStack_2 = 0;
  if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  DStack_1.__t__builder.m_builder.m_coreState.m_stateMachine = (IAsyncStateMachine *)0x0;
  DStack_1.__t__builder.m_builder.m_coreState.m_defaultContextAction = (Action *)0x0;
  DStack_1.__t__builder.m_builder.m_task = (Task_1_VoidTaskResult_ *)0x0;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&DStack_1.__t__builder >> 0xc);
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
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&DStack_1.t >> 0xc);
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
  DStack_1.__1__state = -1;
  DStack_1.t = t;
  mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::
  AsyncTaskMethodBuilder_Start_6
            (&DStack_1.__t__builder,&DStack_1,
             void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForKill_d__12>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForKill_d__12__
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar8 = (Task *)FUN_?(&DStack_1.__t__builder,
                                 MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                                );
  return pTVar8;
}


/* Task AsyncWaitForPosition(Tween, Single) */

Task * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
       DOTweenModuleUnityVersion_AsyncWaitForPosition(Tween *t,float position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForPosition_d__14>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForPosition_d__14__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1.__1__state = 0;
  DStack_1._4_4_ = 0;
  DStack_1.t = (Tween *)0x0;
  DStack_1.position = 0.0;
  DStack_1._44_4_ = 0;
  if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  DStack_1.__t__builder.m_builder.m_coreState.m_stateMachine = (IAsyncStateMachine *)0x0;
  DStack_1.__t__builder.m_builder.m_coreState.m_defaultContextAction = (Action *)0x0;
  DStack_1.__t__builder.m_builder.m_task = (Task_1_VoidTaskResult_ *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&DStack_1.__t__builder >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&DStack_1.t >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  DStack_1.position = position;
  DStack_1.__1__state = -1;
  DStack_1.t = t;
  mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::
  AsyncTaskMethodBuilder_Start_7
            (&DStack_1.__t__builder,&DStack_1,
             void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForPosition_d__14>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForPosition_d__14__
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar7 = (Task *)FUN_?(&DStack_1.__t__builder,
                                 MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                                );
  return pTVar7;
}


/* Task AsyncWaitForRewind(Tween) */

Task * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
       DOTweenModuleUnityVersion_AsyncWaitForRewind(Tween *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForRewind_d__11>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForRewind_d__11__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1.__1__state = 0;
  DStack_1._4_4_ = 0;
  DStack_1.t = (Tween *)0x0;
  uStack_2 = 0;
  if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  DStack_1.__t__builder.m_builder.m_coreState.m_stateMachine = (IAsyncStateMachine *)0x0;
  DStack_1.__t__builder.m_builder.m_coreState.m_defaultContextAction = (Action *)0x0;
  DStack_1.__t__builder.m_builder.m_task = (Task_1_VoidTaskResult_ *)0x0;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&DStack_1.__t__builder >> 0xc);
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
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&DStack_1.t >> 0xc);
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
  DStack_1.__1__state = -1;
  DStack_1.t = t;
  mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::
  AsyncTaskMethodBuilder_Start_8
            (&DStack_1.__t__builder,&DStack_1,
             void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForRewind_d__11>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForRewind_d__11__
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar8 = (Task *)FUN_?(&DStack_1.__t__builder,
                                 MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                                );
  return pTVar8;
}


/* Task AsyncWaitForStart(Tween) */

Task * Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
       DOTweenModuleUnityVersion_AsyncWaitForStart(Tween *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForStart_d__15>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForStart_d__15__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1.__1__state = 0;
  DStack_1._4_4_ = 0;
  DStack_1.t = (Tween *)0x0;
  uStack_2 = 0;
  if (*(int *)&(TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  DStack_1.__t__builder.m_builder.m_coreState.m_stateMachine = (IAsyncStateMachine *)0x0;
  DStack_1.__t__builder.m_builder.m_coreState.m_defaultContextAction = (Action *)0x0;
  DStack_1.__t__builder.m_builder.m_task = (Task_1_VoidTaskResult_ *)0x0;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&DStack_1.__t__builder >> 0xc);
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
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&DStack_1.t >> 0xc);
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
  DStack_1.__1__state = -1;
  DStack_1.t = t;
  mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder::
  AsyncTaskMethodBuilder_Start_9
            (&DStack_1.__t__builder,&DStack_1,
             void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder__Start<DG::Tweening::DOTweenModuleUnityVersion::_AsyncWaitForStart_d__15>_DG__Tweening__DOTweenModuleUnityVersion___AsyncWaitForStart_d__15__
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar8 = (Task *)FUN_?(&DStack_1.__t__builder,
                                 MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::Threading::Tasks::VoidTaskResult>__get_Task__
                                );
  return pTVar8;
}


/* Sequence DOGradientColor(Material, Gradient, Single) */

Sequence *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
DOTweenModuleUnityVersion_DOGradientColor
          (Material *target,Gradient *gradient,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetEase<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__DG__Tweening__Ease_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = DOTween.dll::DG::Tweening::DOTween::DOTween_Sequence((MethodInfo *)0x0);
  if (gradient != (Gradient *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_get_colorKeys
                       (gradient,(MethodInfo *)0x0);
    if (pGVar2 != (GradientColorKey__Array *)0x0) {
      iVar3 = (int)pGVar2->max_length;
      uVar4 = 0;
      if (0 < iVar3) {
        pGVar5 = pGVar2->vector;
        uVar6 = uVar4;
        do {
          uVar7 = (uint)uVar6;
          if ((uint)pGVar2->max_length <= uVar7) goto code_?;
          fStack_8 = pGVar5->time;
          uVar9._0_4_ = (pGVar5->color).r;
          uVar9._4_4_ = (pGVar5->color).g;
          uVar10._0_4_ = (pGVar5->color).b;
          uVar10._4_4_ = (pGVar5->color).a;
          if (uVar7 == 0) {
            CStack_11._0_8_ = uVar9;
            CStack_11._8_8_ = uVar10;
            if (0.0 < pGVar5->time) goto code_?;
            if (target == (Material *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (target,&CStack_11,(MethodInfo *)0x0);
          }
          else {
code_?:
            if (uVar7 == iVar3 - 1U) {
              if (pSVar1 == (Sequence *)0x0) goto code_?;
              if ((pSVar1->fields)._._active_k__BackingField == 0) {
                iVar12 = FUN_?();
                if (0 < iVar12) {
                  DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogInvalidTween
                            ((Tween *)pSVar1,(MethodInfo *)0x0);
                }
                fVar13 = duration - 0.0;
              }
              else {
                fVar13 = duration - (pSVar1->fields)._.duration;
              }
            }
            else {
              if (uVar7 == 0) {
                fVar13 = pGVar5->time;
              }
              else {
                CStack_11._0_8_ = uVar9;
                CStack_11._8_8_ = uVar10;
                if ((uint)pGVar2->max_length <= uVar7 - 1) {
code_?:
                  FUN_?();
                  pcVar14 = (code *)swi(3);
                  pSVar1 = (Sequence *)(*pcVar14)();
                  return pSVar1;
                }
                fVar13 = pGVar5->time - *(float *)((longlong)(pGVar5 + -1) + 0x10);
              }
              fVar13 = fVar13 * duration;
            }
            CStack_11._0_8_ = uVar9;
            CStack_11._8_8_ = uVar10;
            pTVar15 = DOTween.dll::DG::Tweening::ShortcutExtensions::ShortcutExtensions_DOColor
                               (target,&CStack_11,fVar13,(MethodInfo *)0x0);
            t = (Tween *)func_?(pTVar15);
            bVar16 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
                    TweenSettingsExtensions_ValidateAddToSequence(pSVar1,t,0,(MethodInfo *)0x0);
            if (bVar16 != 0) {
              if (pSVar1 == (Sequence *)0x0) goto code_?;
              DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
                        (pSVar1,t,(pSVar1->fields)._.duration,(MethodInfo *)0x0);
            }
          }
          uVar6 = (ulonglong)(uVar7 + 1);
          uVar4 = uVar4 + 1;
          pGVar5 = pGVar5 + 1;
        } while ((longlong)uVar4 < (longlong)iVar3);
      }
      DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                ((Object *)pSVar1,(Object *)target,
                 DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                );
      return pSVar1;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pSVar1 = (Sequence *)(*pcVar14)();
  return pSVar1;
}


/* Sequence DOGradientColor(Material, Gradient, String, Single) */

Sequence *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
DOTweenModuleUnityVersion_DOGradientColor_1
          (Material *target,Gradient *gradient,String *property,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetEase<DG::Tweening::Core::TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Color,_UnityEngine::Color,_DG::Tweening::Plugins::Options::ColorOptions>__DG__Tweening__Ease_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = DOTween.dll::DG::Tweening::DOTween::DOTween_Sequence((MethodInfo *)0x0);
  if ((gradient != (Gradient *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_get_colorKeys
                         (gradient,(MethodInfo *)0x0), pGVar2 != (GradientColorKey__Array *)0x0)) {
    iVar3 = (int)pGVar2->max_length;
    uVar4 = 0;
    if (0 < iVar3) {
      lVar5 = 0;
      pGVar6 = pGVar2->vector;
      do {
        if ((uint)pGVar2->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          pSVar1 = (Sequence *)(*pcVar7)();
          return pSVar1;
        }
        fStack_8 = pGVar6->time;
        uVar9._0_4_ = (pGVar6->color).r;
        uVar9._4_4_ = (pGVar6->color).g;
        uVar10._0_4_ = (pGVar6->color).b;
        uVar10._4_4_ = (pGVar6->color).a;
        if ((uVar4 != 0) || (CStack_11._0_8_ = uVar9, CStack_11._8_8_ = uVar10, 0.0 < pGVar6->time)
           ) {
          if (uVar4 == iVar3 - 1U) {
            if (pSVar1 == (Sequence *)0x0) goto code_?;
            if ((pSVar1->fields)._._active_k__BackingField == 0) {
              iVar12 = FUN_?();
              if (0 < iVar12) {
                DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogInvalidTween
                          ((Tween *)pSVar1,(MethodInfo *)0x0);
              }
              fVar13 = duration - 0.0;
            }
            else {
              fVar13 = duration - (pSVar1->fields)._.duration;
            }
          }
          else {
            if (uVar4 == 0) {
              fVar13 = pGVar6->time;
            }
            else {
              CStack_11._0_8_ = uVar9;
              CStack_11._8_8_ = uVar10;
              if ((uint)pGVar2->max_length <= uVar4 - 1) goto code_?;
              fVar13 = pGVar6->time - *(float *)((longlong)(pGVar6 + -1) + 0x10);
            }
            fVar13 = fVar13 * duration;
          }
          CStack_11._0_8_ = uVar9;
          CStack_11._8_8_ = uVar10;
          pTVar14 = DOTween.dll::DG::Tweening::ShortcutExtensions::ShortcutExtensions_DOColor_1
                             (target,&CStack_11,property,fVar13,(MethodInfo *)0x0);
          t = (Tween *)func_?(pTVar14);
          bVar15 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
                  TweenSettingsExtensions_ValidateAddToSequence(pSVar1,t,0,(MethodInfo *)0x0);
          if (bVar15 != 0) {
            if (pSVar1 == (Sequence *)0x0) goto code_?;
            DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
                      (pSVar1,t,(pSVar1->fields)._.duration,(MethodInfo *)0x0);
          }
        }
        else {
          if (target == (Material *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (target,property,&CStack_11,(MethodInfo *)0x0);
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 1;
        pGVar6 = pGVar6 + 1;
      } while (lVar5 < iVar3);
    }
    DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
              ((Object *)pSVar1,(Object *)target,
               DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
              );
    return pSVar1;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar1 = (Sequence *)(*pcVar7)();
  return pSVar1;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOOffset(Material, Vector2, Int32, Single) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::DOTweenModuleUnityVersion_DOOffset
          (Material *target,Vector2 endValue,int32_t propertyID,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass8_0___DOOffset_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass8_0___DOOffset_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass8_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Material **)(lVar1 + 0x10) = target;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    *(int32_t *)(lVar1 + 0x18) = propertyID;
    if (*(Material **)(lVar1 + 0x10) != (Material *)0x0) {
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                        (*(Material **)(lVar1 + 0x10),propertyID,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__DG__Tweening__Core__Debugger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (0 < TypeInfo__DG__Tweening__Core__Debugger->static_fields->_logPriority) {
          DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogMissingMaterialProperty_1
                    (*(int32_t *)(lVar1 + 0x18),(MethodInfo *)0x0);
        }
        pTVar8 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0;
      }
      else {
        getter = (DOGetter_1_UnityEngine_Vector2_ *)
                 FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
        FUN_?(getter,lVar1,
                      MethodInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass8_0___DOOffset_b__0__
                     );
        setter = (DOSetter_1_UnityEngine_Vector2_ *)
                 FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
        FUN_?(setter,lVar1,
                      MethodInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass8_0___DOOffset_b__1_UnityEngine__Vector2_
                     );
        if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
          FUN_?();
        }
        pTVar8 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                           (getter,setter,endValue,duration,(MethodInfo *)0x0);
        DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                  ((Object *)pTVar8,*(Object **)(lVar1 + 0x10),
                   DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>__System__Object_
                  );
      }
      return pTVar8;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pTVar8 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
            *)(*pcVar9)();
  return pTVar8;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOTiling(Material, Vector2, Int32, Single) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::DOTweenModuleUnityVersion_DOTiling
          (Material *target,Vector2 endValue,int32_t propertyID,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass9_0___DOTiling_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass9_0___DOTiling_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass9_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Material **)(lVar1 + 0x10) = target;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    *(int32_t *)(lVar1 + 0x18) = propertyID;
    if (*(Material **)(lVar1 + 0x10) != (Material *)0x0) {
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                        (*(Material **)(lVar1 + 0x10),propertyID,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__DG__Tweening__Core__Debugger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (0 < TypeInfo__DG__Tweening__Core__Debugger->static_fields->_logPriority) {
          DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogMissingMaterialProperty_1
                    (*(int32_t *)(lVar1 + 0x18),(MethodInfo *)0x0);
        }
        pTVar8 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0;
      }
      else {
        getter = (DOGetter_1_UnityEngine_Vector2_ *)
                 FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
        FUN_?(getter,lVar1,
                      MethodInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass9_0___DOTiling_b__0__
                     );
        setter = (DOSetter_1_UnityEngine_Vector2_ *)
                 FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
        FUN_?(setter,lVar1,
                      MethodInfo__DG__Tweening__DOTweenModuleUnityVersion____c__DisplayClass9_0___DOTiling_b__1_UnityEngine__Vector2_
                     );
        if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
          FUN_?();
        }
        pTVar8 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                           (getter,setter,endValue,duration,(MethodInfo *)0x0);
        DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                  ((Object *)pTVar8,*(Object **)(lVar1 + 0x10),
                   DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector2,_UnityEngine::Vector2,_DG::Tweening::Plugins::Options::VectorOptions>__System__Object_
                  );
      }
      return pTVar8;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pTVar8 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
            *)(*pcVar9)();
  return pTVar8;
}


/* CustomYieldInstruction WaitForCompletion(Tween, Boolean) */

CustomYieldInstruction *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
DOTweenModuleUnityVersion_WaitForCompletion
          (Tween *t,bool returnCustomYieldInstruction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForCompletion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (t == (Tween *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pCVar2 = (CustomYieldInstruction *)(*pcVar1)();
    return pCVar2;
  }
  if ((t->fields)._active_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DG__Tweening__Core__Debugger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (0 < TypeInfo__DG__Tweening__Core__Debugger->static_fields->_logPriority) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_This_Tween_has_been_killed_and_i);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogWarning
                ((Object *)StringLiteral_This_Tween_has_been_killed_and_i,(Tween *)0x0,
                 (MethodInfo *)0x0);
    }
    return (CustomYieldInstruction *)0x0;
  }
  pCVar2 = (CustomYieldInstruction *)
           FUN_?(TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForCompletion);
  bVar3 = iRam_? != 0;
  pCVar2[1].klass = (CustomYieldInstruction__Class *)t;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(pCVar2 + 1) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return pCVar2;
}


/* CustomYieldInstruction WaitForElapsedLoops(Tween, Int32, Boolean) */

CustomYieldInstruction *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
DOTweenModuleUnityVersion_WaitForElapsedLoops
          (Tween *t,int32_t elapsedLoops,bool returnCustomYieldInstruction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForElapsedLoops);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (t == (Tween *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pCVar2 = (CustomYieldInstruction *)(*pcVar1)();
    return pCVar2;
  }
  if ((t->fields)._active_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DG__Tweening__Core__Debugger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (0 < TypeInfo__DG__Tweening__Core__Debugger->static_fields->_logPriority) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_This_Tween_has_been_killed_and_i);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogWarning
                ((Object *)StringLiteral_This_Tween_has_been_killed_and_i,(Tween *)0x0,
                 (MethodInfo *)0x0);
    }
    return (CustomYieldInstruction *)0x0;
  }
  pCVar2 = (CustomYieldInstruction *)
           FUN_?(TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForElapsedLoops);
  bVar3 = iRam_? != 0;
  pCVar2[1].klass = (CustomYieldInstruction__Class *)t;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(pCVar2 + 1) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  *(int32_t *)&pCVar2[1].monitor = elapsedLoops;
  return pCVar2;
}


/* CustomYieldInstruction WaitForKill(Tween, Boolean) */

CustomYieldInstruction *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::DOTweenModuleUnityVersion_WaitForKill
          (Tween *t,bool returnCustomYieldInstruction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForKill);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (t == (Tween *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pCVar2 = (CustomYieldInstruction *)(*pcVar1)();
    return pCVar2;
  }
  if ((t->fields)._active_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DG__Tweening__Core__Debugger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (0 < TypeInfo__DG__Tweening__Core__Debugger->static_fields->_logPriority) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_This_Tween_has_been_killed_and_i);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogWarning
                ((Object *)StringLiteral_This_Tween_has_been_killed_and_i,(Tween *)0x0,
                 (MethodInfo *)0x0);
    }
    return (CustomYieldInstruction *)0x0;
  }
  pCVar2 = (CustomYieldInstruction *)
           FUN_?(TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForKill);
  bVar3 = iRam_? != 0;
  pCVar2[1].klass = (CustomYieldInstruction__Class *)t;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(pCVar2 + 1) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return pCVar2;
}


/* CustomYieldInstruction WaitForPosition(Tween, Single, Boolean) */

CustomYieldInstruction *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
DOTweenModuleUnityVersion_WaitForPosition
          (Tween *t,float position,bool returnCustomYieldInstruction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForPosition);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (t == (Tween *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pCVar2 = (CustomYieldInstruction *)(*pcVar1)();
    return pCVar2;
  }
  if ((t->fields)._active_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DG__Tweening__Core__Debugger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (0 < TypeInfo__DG__Tweening__Core__Debugger->static_fields->_logPriority) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_This_Tween_has_been_killed_and_i);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogWarning
                ((Object *)StringLiteral_This_Tween_has_been_killed_and_i,(Tween *)0x0,
                 (MethodInfo *)0x0);
    }
    return (CustomYieldInstruction *)0x0;
  }
  pCVar2 = (CustomYieldInstruction *)
           FUN_?(TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForPosition);
  bVar3 = iRam_? != 0;
  pCVar2[1].klass = (CustomYieldInstruction__Class *)t;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(pCVar2 + 1) >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  *(float *)&pCVar2[1].monitor = position;
  return pCVar2;
}


/* CustomYieldInstruction WaitForRewind(Tween, Boolean) */

CustomYieldInstruction *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::
DOTweenModuleUnityVersion_WaitForRewind
          (Tween *t,bool returnCustomYieldInstruction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForRewind);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (t == (Tween *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pCVar2 = (CustomYieldInstruction *)(*pcVar1)();
    return pCVar2;
  }
  if ((t->fields)._active_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DG__Tweening__Core__Debugger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (0 < TypeInfo__DG__Tweening__Core__Debugger->static_fields->_logPriority) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_This_Tween_has_been_killed_and_i);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogWarning
                ((Object *)StringLiteral_This_Tween_has_been_killed_and_i,(Tween *)0x0,
                 (MethodInfo *)0x0);
    }
    return (CustomYieldInstruction *)0x0;
  }
  pCVar2 = (CustomYieldInstruction *)
           FUN_?(TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForRewind);
  bVar3 = iRam_? != 0;
  pCVar2[1].klass = (CustomYieldInstruction__Class *)t;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(pCVar2 + 1) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return pCVar2;
}


/* CustomYieldInstruction WaitForStart(Tween, Boolean) */

CustomYieldInstruction *
Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUnityVersion::DOTweenModuleUnityVersion_WaitForStart
          (Tween *t,bool returnCustomYieldInstruction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForStart);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (t == (Tween *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pCVar2 = (CustomYieldInstruction *)(*pcVar1)();
    return pCVar2;
  }
  if ((t->fields)._active_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DG__Tweening__Core__Debugger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (0 < TypeInfo__DG__Tweening__Core__Debugger->static_fields->_logPriority) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_This_Tween_has_been_killed_and_i);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogWarning
                ((Object *)StringLiteral_This_Tween_has_been_killed_and_i,(Tween *)0x0,
                 (MethodInfo *)0x0);
    }
    return (CustomYieldInstruction *)0x0;
  }
  pCVar2 = (CustomYieldInstruction *)
           FUN_?(TypeInfo__DG__Tweening__DOTweenCYInstruction__WaitForStart);
  bVar3 = iRam_? != 0;
  pCVar2[1].klass = (CustomYieldInstruction__Class *)t;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(pCVar2 + 1) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return pCVar2;
}

