
/* Void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem_ApplyLocalDescriptionOverride
               (InventoryItem *this,MVWorldObjectDocumentationType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__InventoryItem);
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
            TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
  if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this_00,t,
                     MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar2) {
    if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__InventoryItem);
    }
    this_01 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if ((this_01 ==
         (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) ||
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,t,
                            MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                           ), pOVar3 == (Object *)0x0)) goto code_?;
    bVar4 = iRam_? != 0;
    (this->fields).name = (String *)pOVar3[1].klass;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).name >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_u000Au000A);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar9 = mscorlib.dll::System::String::String_Concat_5
                       ((String *)pOVar3[1].monitor,StringLiteral_u000Au000A,
                        (String *)pOVar3[2].klass,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).description = pSVar9;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).description >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  return;
}


/* InventoryItem() */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItem__ItemDescription);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_handful_of_ninja_shurikens_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cube_Model_Transparency);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Revolver);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vertical_Rotator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Use_this_in_close_quarters_to_de);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Can_be_used_as_a_challenging_way);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trigger_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_pair_of_connected_teleporters_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_sentry_tower__shooting_a_beam_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fire_sentries_serve_as_stationar);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_customizable_hovercraft_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Switches_between_ON_and_OFF_each);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Make_a_game_where_you_have_to_pi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_scary_monster_can_move_thro);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Frost_Sentry_Tower);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Team_Editor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Negate_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Objective__Eliminate_the_Oc);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_player_team_who_first_collec);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Adjust_the_level_and_color_of_yo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Contains_lots_of_coins__which_ca);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Wind_Turbine);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Use_this_by_connecting_it_to_a_p);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_can_be_used_to_make_a_bette);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Class);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Shuriken);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Text);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_bazooka_is_incredibly_powerf);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_is_really_neat_when_you_wan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Become_one_with_the_shadows_usin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Light_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Green_Team_Spawn_Point);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_sliding_door_that_can_be_opene);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Crystal_Vein);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Allows_for_scripted_events_in_a_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Records_the_time_it_took_for_a_p);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Adds_a_global_sound_to_the_game_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_modifiable_projectile_weapon_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_logic_cube_sends_signals_in);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Great_cube_if_you_want_to_obstru);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pressure_Plate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Platform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Counting_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Allows_players_to_spawn_as_a_cla);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Speaker);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_And_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Shotgun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Global_Speaker);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fire_Sentry_Tower);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Shoots_cubes_that_stick_to_surfa);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_rifle_is_at_its_best_in_clo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Can_be_used_for_everything_from_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Modify_the_roles_of_your_teams__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Light_up_the_dark_areas_of_your_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Random_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_high_powered_revolver_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Change_the_transparency_for_a_cu);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Bazooka);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Infuses_the_player_with_lightnin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_team_or_player_that_reaches_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Collect_all_these_sparkly_trinke);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WARNING__KoGaMians_cannot_breath);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_fully_automatic_rifle_capable_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Horizontal_Rotator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Toggle_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Whenever_a_player_steps_on_the_p);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Spawn_point_for_the_green_team__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Devastating_when_used_at_long_ra);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hides_connected_cube_model_when_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_enables_players_to_cross_lo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Players_pick_these_up_to_pay_for);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Flamethrower);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Costume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Display_a_game_title__help_text_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_pair_of_high_powered_revolvers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trap_Door);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Powers_one_connected_object_at_r);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Growth_Pill);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Skybox_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Equip_this_to_blend_into_the_env);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_An_equippable_costume_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Enables_players_to_traverse_grea);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_burns_anyone_who_gets_too_c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_weapon_designed_for_close_quar);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Flags_are_a_great_way_to_give_pl);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Impulse_Gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_big_customizable_jetpack_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_gun_generating_a_powerful_forc);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Spawn_point_for_the_yellow_team_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Set_a_player_kill_limit_for_your);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Melee_Weapon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_health_pack_fully_heals_a_pl);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_can_put_these_in_sequence_to);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_An_unkillable_ghost_which_damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cube_Model_Hider);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_pair_consisting_of_a_pickup_an);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Throw_a_line_of_shurikens__and_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Red_Team_Spawn_Point);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_jetpack_offers_unprecedente);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Frost_sentries_serve_as_stationa);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Make_your_enemies_bigger_targets);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Coin_Chest);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Don_t_let_your_friends_die__shoo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Water_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Infuses_the_player_with_mutageni);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_pistol_that_shrinks_the_target);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Round_cubes_are_a_great_if_your_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Use_this_to_make_an_animated_doo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Custom_Gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Useful_when_bridging_the_gap_bet);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_is_useful_if_you_want_to_cr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_custom_cube_model__that_rotate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_player_who_reaches_the_flag_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Spawn_point_for_the_blue_team__P);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Transforms_the_target_into_a_gia);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Create_elevators_or_platforms_wi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_trap_door_that_can_be_opened_b);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mutanto);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sends_a_signal_when_shot_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Become_a_miniature_version_of_yo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_These_hideous_creatures_only_hav);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sends_a_signal_when_pulled_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Heal_Ray);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Open_doors__trigger_explosives__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Connect_this_to_an_toggle_box_fo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Pill);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_bundle_of_dynamite_that_will_e);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Useful_for_separating_different_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_classic_ninja_shuriken_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_giant_hamster_ball_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Camera_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_And_Cube_takes_several_input);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Door);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Turn_enemy_players_into_helpless);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_rocket_launcher_with_devastati);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Collect_And_Drop);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Set_a_time_limit_for_a_round__Af);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sneak_up_on_your_enemies_to_catc);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_fully_customizable_projectile_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Yellow_Team_Spawn_Point);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_If_you_want_players_to_stand_on_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_logic_object_which_sends_the_o);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Round_Time);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_colored_light__that_can_be_con);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Objective__Time_Attack_Flag);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_sniper_rifle_uses_a_charged_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ghost);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_player_who_reaches_this_will_r);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hovercraft);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_looks_super_cool_and_can_be);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Shrinks_a_player_to_the_size_of_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_custom_cube_model__that_rotate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Oculus);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_classic__Burn_everything_withi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Do_you_want_to_open_and_close_th);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Light_your_enemies_on_fire_with_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Coin);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Blue_Team_Spawn_Point);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Transforms_a_player_into_a_giant);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Change_transparency_to_cube_mode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Set_a_Oculus_kill_limit_for_your);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Lets_players_take_their_time_rea);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_big_fan__which_blows_players_a);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_An_object_enabling_you_to_displa);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dragonfly_Jetpack);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_gun_modeled_after_the_classic_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Place_this_after_difficult_parts);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Use_this_to_reward_players_for_r);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Become_a_super_hero__or_super_vi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Objective__Flag);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sliding_Door);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Spawn_point_for_the_red_team__Pl);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pulse_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dual_Revolvers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Can_be_used_to_open_doors_or_sec);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vehicle_Energy);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Lever);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_An_object_specifying_the_distanc);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_bouncy_ball_offers_a_hilari);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_small_customizable_jetpack_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Reward_players_with_coins_used_t);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_door_that_can_be_opened_by_a_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Multi_Shuriken);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Emits_a_cloud_of_smoke__The_smok);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Lightning_Speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Target_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Become_a_giant_KoGaMian__capable);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Growth_Gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_is_a_great_way_to_control_t);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Set_a_count__Each_time_the_cube_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_is_most_commonly_used_to_en);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Machine_Gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Delay_Cube);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cube_Gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Crystal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Checkpoint);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Useful_for_pushing_players_off_p);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hamster_Ball);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Contains_lots_of_crystals__which);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_While_a_player_is_inside_the_are);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_can_stack_several_wind_turbi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Explosive);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Use_this_to_make_an_animated_tra);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Add_this_to_create_a_death_match);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Firefly_Jetpack);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_is_great_for_creating_the_a);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Objective__Star);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Teleporter);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_When_receiving_a_signal_from_ano);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Use_this_to_make_an_animated_sli);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_gun_has_a_very_high_recoil_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_object_allows_you_to_change);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Most_effective_in_mid_to_long_ra);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Build_awesome_towers__thick_cast);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Rail_Gun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Adding_this_to_your_project_will);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Inverting_a_signal_open_up_many_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Can_be_used_to_refill_vehicles_e);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Customize_different_Classes_with);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Add_sounds_to_your_game__There_s);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Objective__Death_match);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_sentry_tower__shooting_fire_at);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_is_a_must_have_for_any_leve);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_can_pair_this_with_the_Smoke);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Players_pick_these_up_to_get_pro);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Smoke);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Soar_to_the_skies_with_this_ligh);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Shoots_a_ray_that_heals_people__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Manage_the_look_of_your_game_by_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Health_Pack);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_customizable_monster_from_anot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Dictionary__
            );
  pSVar1 = TM::TM__(StringLiteral_Health_Pack,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_The_health_pack_fully_heals_a_pl,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Place_this_after_difficult_parts,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  aVStack_5[0].z = 0.0;
  aVStack_5[0].x = 0.0;
  aVStack_5[0].y = 0.0;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar4,pSVar1,pSVar2,pSVar3,aVStack_5,(MethodInfo *)0x0);
  if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Machine_Gun,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_fully_automatic_rifle_capable_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_rifle_is_at_its_best_in_clo,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Impulse_Gun,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_gun_generating_a_powerful_forc,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_gun_has_a_very_high_recoil_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Bazooka,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_rocket_launcher_with_devastati,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_The_bazooka_is_incredibly_powerf,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Rail_Gun,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_The_sniper_rifle_uses_a_charged_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Devastating_when_used_at_long_ra,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Melee_Weapon,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_weapon_designed_for_close_quar,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Sneak_up_on_your_enemies_to_catc,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Mutanto,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Infuses_the_player_with_mutageni,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Become_a_super_hero__or_super_vi,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,7,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Flamethrower,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_classic__Burn_everything_withi,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Light_your_enemies_on_fire_with_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,8,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Shotgun,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_gun_modeled_after_the_classic_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Use_this_in_close_quarters_to_de,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,9,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Game_Objective__Star,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_The_player_team_who_first_collec,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Collect_all_these_sparkly_trinke,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,10,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Growth_Pill,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Transforms_a_player_into_a_giant,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Become_a_giant_KoGaMian__capable,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0xb,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Mouse_Pill,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Shrinks_a_player_to_the_size_of_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Become_a_miniature_version_of_yo,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0xc,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Mouse_Gun,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_pistol_that_shrinks_the_target,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Turn_enemy_players_into_helpless,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0xd,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Shuriken,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_classic_ninja_shuriken_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Become_one_with_the_shadows_usin,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0xe,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Multi_Shuriken,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_handful_of_ninja_shurikens_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Throw_a_line_of_shurikens__and_s,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0xf,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Cube_Gun,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Shoots_cubes_that_stick_to_surfa,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Build_awesome_towers__thick_cast,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x10,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Coin,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Players_pick_these_up_to_pay_for,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Reward_players_with_coins_used_t,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x11,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Coin_Chest,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Contains_lots_of_coins__which_ca,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Use_this_to_reward_players_for_r,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x12,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Dual_Revolvers,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_pair_of_high_powered_revolvers,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Most_effective_in_mid_to_long_ra,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x13,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Growth_Gun,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Transforms_the_target_into_a_gia,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Make_your_enemies_bigger_targets,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x14,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Revolver,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_high_powered_revolver_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Most_effective_in_mid_to_long_ra,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x15,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Lightning_Speed,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Infuses_the_player_with_lightnin,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_enables_players_to_cross_lo,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x16,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Oculus,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_customizable_monster_from_anot,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_These_hideous_creatures_only_hav,(MethodInfo *)0x0);
  fVar7 = _UNK_?;
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  aVStack_5[0].z = fVar7;
  aVStack_5[0].x = 0.0;
  aVStack_5[0].y = 0.0;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar4,pSVar1,pSVar2,pSVar3,aVStack_5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x17,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Teleporter,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_pair_of_connected_teleporters_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Useful_for_separating_different_,(MethodInfo *)0x0);
  fVar8 = _UNK_?;
  fVar9 = _UNK_?;
  fVar7 = _UNK_?;
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  aVStack_5[0].y = fVar9;
  aVStack_5[0].x = fVar7;
  aVStack_5[0].z = fVar8;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar4,pSVar1,pSVar2,pSVar3,aVStack_5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x18,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Hovercraft,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_customizable_hovercraft_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Enables_players_to_traverse_grea,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  aVStack_5[0].z = fVar9;
  aVStack_5[0].x = 0.0;
  aVStack_5[0].y = 0.0;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar4,pSVar1,pSVar2,pSVar3,aVStack_5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x19,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Hamster_Ball,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_giant_hamster_ball_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_bouncy_ball_offers_a_hilari,(MethodInfo *)0x0);
  fVar10 = _UNK_?;
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  aVStack_5[0].z = 0.0;
  aVStack_5[0].y = fVar10;
  aVStack_5[0].x = fVar9;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar4,pSVar1,pSVar2,pSVar3,aVStack_5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x1a,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Fire_Sentry_Tower,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_sentry_tower__shooting_fire_at,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Fire_sentries_serve_as_stationar,(MethodInfo *)0x0);
  fVar10 = _UNK_?;
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  aVStack_5[0].y = fVar10;
  aVStack_5[0].x = _UNK_?;
  aVStack_5[0].z = fVar8;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar4,pSVar1,pSVar2,pSVar3,aVStack_5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x1b,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Platform,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Create_elevators_or_platforms_wi,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Useful_when_bridging_the_gap_bet,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x1c,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Horizontal_Rotator,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_custom_cube_model__that_rotate,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Can_be_used_as_a_challenging_way,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x1d,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Vertical_Rotator,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_custom_cube_model__that_rotate,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Useful_for_pushing_players_off_p,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x1e,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Dragonfly_Jetpack,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_big_customizable_jetpack_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_jetpack_offers_unprecedente,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  aVStack_5[0]._0_8_ = (ulonglong)(uint)fVar8 << 0x20;
  aVStack_5[0].z = fVar7;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar4,pSVar1,pSVar2,pSVar3,aVStack_5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x1f,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Ghost,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_An_unkillable_ghost_which_damage,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_scary_monster_can_move_thro,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x20,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Frost_Sentry_Tower,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_sentry_tower__shooting_a_beam_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Frost_sentries_serve_as_stationa,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  aVStack_5[0].x = _UNK_?;
  aVStack_5[0].z = fVar8;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar4,pSVar1,pSVar2,pSVar3,aVStack_5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x21,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Firefly_Jetpack,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_small_customizable_jetpack_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Soar_to_the_skies_with_this_ligh,(MethodInfo *)0x0);
  uVar11 = _UNK_?;
  fVar7 = _UNK_?;
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  aVStack_5[0].z = fVar7;
  aVStack_5[0]._0_8_ = (ulonglong)uVar11 << 0x20;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar4,pSVar1,pSVar2,pSVar3,aVStack_5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x22,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Light_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_colored_light__that_can_be_con,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Light_up_the_dark_areas_of_your_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x23,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar2 = TM::TM__(StringLiteral_Blue_Team_Spawn_Point,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_blue_team__P,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  pSVar1 = ::StringLiteral__;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar2,pSVar3,::StringLiteral__,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x24,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar2 = TM::TM__(StringLiteral_Red_Team_Spawn_Point,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_red_team__Pl,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  pSVar1 = ::StringLiteral__;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar2,pSVar3,::StringLiteral__,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x25,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar2 = TM::TM__(StringLiteral_Green_Team_Spawn_Point,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_green_team__,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  pSVar1 = ::StringLiteral__;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar2,pSVar3,::StringLiteral__,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x26,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar2 = TM::TM__(StringLiteral_Yellow_Team_Spawn_Point,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_yellow_team_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  pSVar1 = ::StringLiteral__;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar2,pSVar3,::StringLiteral__,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x27,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Game_Objective__Flag,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_The_player_who_reaches_the_flag_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Flags_are_a_great_way_to_give_pl,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x28,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Explosive,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_bundle_of_dynamite_that_will_e,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Use_this_by_connecting_it_to_a_p,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x29,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Fire,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_This_burns_anyone_who_gets_too_c,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_You_can_pair_this_with_the_Smoke,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x2a,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Smoke,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Emits_a_cloud_of_smoke__The_smok,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Great_cube_if_you_want_to_obstru,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x2b,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Text,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_An_object_enabling_you_to_displa,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Display_a_game_title__help_text_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x2c,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Skybox_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Manage_the_look_of_your_game_by_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Adding_this_to_your_project_will,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x2d,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Water_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Adjust_the_level_and_color_of_yo,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_WARNING__KoGaMians_cannot_breath,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x2e,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Speaker,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Add_sounds_to_your_game__There_s,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_is_great_for_creating_the_a,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x2f,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Checkpoint,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_player_who_reaches_this_will_r,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_is_a_must_have_for_any_leve,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x31,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Game_Objective__Eliminate_the_Oc,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Set_a_Oculus_kill_limit_for_your,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_The_team_or_player_that_reaches_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x32,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Wind_Turbine,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_big_fan__which_blows_players_a,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_You_can_stack_several_wind_turbi,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x33,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Round_Time,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Set_a_time_limit_for_a_round__Af,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Round_cubes_are_a_great_if_your_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x34,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Game_Objective__Death_match,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Set_a_player_kill_limit_for_your,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Add_this_to_create_a_death_match,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x35,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Camera_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_An_object_specifying_the_distanc,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_is_a_great_way_to_control_t,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x36,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Delay_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_When_receiving_a_signal_from_ano,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_You_can_put_these_in_sequence_to,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x37,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Toggle_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Switches_between_ON_and_OFF_each,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Do_you_want_to_open_and_close_th,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x38,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Negate_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_logic_object_which_sends_the_o,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Inverting_a_signal_open_up_many_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x39,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_And_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_The_And_Cube_takes_several_input,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_If_you_want_players_to_stand_on_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3a,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Pressure_Plate,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Whenever_a_player_steps_on_the_p,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Connect_this_to_an_toggle_box_fo,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3b,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Cube_Model_Hider,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Hides_connected_cube_model_when_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_is_most_commonly_used_to_en,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3c,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Pulse_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_This_logic_cube_sends_signals_in,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_is_really_neat_when_you_wan,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3d,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Random_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Powers_one_connected_object_at_r,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_is_useful_if_you_want_to_cr,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3e,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Counting_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Set_a_count__Each_time_the_cube_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_looks_super_cool_and_can_be,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3f,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Target_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Sends_a_signal_when_shot_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Can_be_used_to_open_doors_or_sec,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x40,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Lever,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Sends_a_signal_when_pulled_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Open_doors__trigger_explosives__,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x41,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Collect_And_Drop,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_pair_consisting_of_a_pickup_an,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Can_be_used_for_everything_from_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x42,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Heal_Ray,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Shoots_a_ray_that_heals_people__,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Don_t_let_your_friends_die__shoo,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x43,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Global_Speaker,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Adds_a_global_sound_to_the_game_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_This_can_be_used_to_make_a_bette,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x30,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Game_Objective__Time_Attack_Flag,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Records_the_time_it_took_for_a_p,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Lets_players_take_their_time_rea,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x44,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Trigger_Cube,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_While_a_player_is_inside_the_are,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Allows_for_scripted_events_in_a_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x45,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Team_Editor,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_This_object_allows_you_to_change,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Modify_the_roles_of_your_teams__,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x46,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Crystal,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Players_pick_these_up_to_get_pro,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Use_this_to_reward_players_for_r,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x47,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Crystal_Vein,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Contains_lots_of_crystals__which,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Use_this_to_reward_players_for_r,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x48,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Class,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Allows_players_to_spawn_as_a_cla,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Customize_different_Classes_with,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x49,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Vehicle_Energy,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Can_be_used_to_refill_vehicles_e,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Make_a_game_where_you_have_to_pi,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x4a,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Door,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_door_that_can_be_opened_by_a_s,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Use_this_to_make_an_animated_doo,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x4b,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Sliding_Door,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_sliding_door_that_can_be_opene,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Use_this_to_make_an_animated_sli,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x4c,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Trap_Door,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_trap_door_that_can_be_opened_b,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Use_this_to_make_an_animated_tra,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  aVStack_5[0].x = _UNK_?;
  aVStack_5[0].z = fVar8;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar4,pSVar1,pSVar2,pSVar3,aVStack_5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x4d,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Costume,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_An_equippable_costume_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Equip_this_to_blend_into_the_env,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x4e,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Cube_Model_Transparency,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Change_transparency_to_cube_mode,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Change_the_transparency_for_a_cu,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x4f,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Custom_Gun,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_A_modifiable_projectile_weapon_,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_A_fully_customizable_projectile_,(MethodInfo *)0x0);
  pIVar4 = (InventoryItem_ItemDescription *)FUN_?(TypeInfo__InventoryItem__ItemDescription)
  ;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
            (pIVar4,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x50,(Object *)pIVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride =
       (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)this;
  if (iRam_? != 0) {
    uVar11 = (uint)((ulonglong)TypeInfo__InventoryItem->static_fields >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar15 = uVar13 == *puVar14;
      if (bVar15) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar15);
  }
  return;
}


/* InventoryItem() */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor(InventoryItem *this,MethodInfo *method)

{
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  return;
}


/* InventoryItem(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_1
               (InventoryItem *this,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  if ((data != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
     (plVar1 = (longlong *)FUN_?(data,0x29), plVar1 != (longlong *)0x0)) {
    if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
      FUN_?(plVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).itemID = (int32_t)plVar1[2];
    plVar1 = (longlong *)FUN_?(data,0x99);
    if (plVar1 != (longlong *)0x0) {
      if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar1);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).itemCategoryID = (int32_t)plVar1[2];
      plVar1 = (longlong *)FUN_?(data,0x2a);
      if (plVar1 != (longlong *)0x0) {
        if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar1);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->fields).itemTypeID = (int32_t)plVar1[2];
        pSVar3 = (String *)FUN_?(data,0x2b);
        if (pSVar3 == (String *)0x0) {
          (this->fields).name = (String *)0x0;
        }
        else {
          pSVar4 = (String *)0x0;
          if (pSVar3->klass == pSRam0000000182dc50c0) {
            pSVar4 = pSVar3;
          }
          if (pSVar4 == (String *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (this->fields).name = pSVar4;
          pSVar4 = (String *)0x0;
          if (pSVar3->klass == pSRam0000000182dc50c0) {
            pSVar4 = pSVar3;
          }
          if (pSVar4 == (String *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(this->fields).name >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        (this->fields).isDeleted = 0;
        lVar6 = FUN_?(data,0x2c);
        pBVar10 = TypeInfo__System__Byte;
        if (lVar6 == 0) {
          (this->fields).data = (Byte__Array *)0x0;
        }
        else {
          pBVar11 = (Byte__Array *)FUN_?(lVar6,TypeInfo__System__Byte);
          if (pBVar11 == (Byte__Array *)0x0) {
            FUN_?(lVar6,pBVar10);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (this->fields).data = pBVar11;
          pBVar10 = TypeInfo__System__Byte;
          lVar12 = FUN_?(lVar6,TypeInfo__System__Byte);
          if (lVar12 == 0) {
            FUN_?(lVar6,pBVar10);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(this->fields).data >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        plVar1 = (longlong *)FUN_?(data,0x2e);
        if (plVar1 != (longlong *)0x0) {
          lVar6 = *plVar1;
          if (*(longlong *)(lVar6 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar1,lRam_?);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (this->fields).slotPosition = (int32_t)plVar1[2];
          plVar1 = (longlong *)FUN_?(data,CONCAT71((int7)((ulonglong)lVar6 >> 8),0x8d));
          if (plVar1 != (longlong *)0x0) {
            lVar6 = *plVar1;
            if (*(longlong *)(lVar6 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
              FUN_?(plVar1,lRam_?);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (this->fields).resellable = *(bool *)(plVar1 + 2);
            plVar1 = (longlong *)FUN_?(data,CONCAT71((int7)((ulonglong)lVar6 >> 8),0x48));
            if (plVar1 != (longlong *)0x0) {
              lVar6 = *plVar1;
              if (*(longlong *)(lVar6 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
                FUN_?(plVar1,lRam_?);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (this->fields).priceGold = (int32_t)plVar1[2];
              plVar1 = (longlong *)FUN_?(data,CONCAT71((int7)((ulonglong)lVar6 >> 8),0x8c));
              if (plVar1 != (longlong *)0x0) {
                lVar6 = *plVar1;
                if (*(longlong *)(lVar6 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
                  FUN_?(plVar1,lRam_?);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                (this->fields).authorProfileID = (int32_t)plVar1[2];
                plVar1 = (longlong *)
                         FUN_?(data,CONCAT71((int7)((ulonglong)lVar6 >> 8),0x8e));
                if (plVar1 != (longlong *)0x0) {
                  if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
                    FUN_?(plVar1,lRam_?);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  (this->fields).originalItemID = (int32_t)plVar1[2];
                  (this->fields).purchased = 1;
                  (this->fields).isDefaultInvItem = 0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* InventoryItem(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_2
               (InventoryItem *this,int32_t itemID,
               Dictionary_2_System_Object_System_Object_ *itemData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  (this->fields).itemID = itemID;
  auStackX_10[0] = 0x74;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
  if ((itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (itemData,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).itemCategoryID = *(int32_t *)&pOVar1[1].klass;
    auStackX_10[0] = 0x11;
    pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (itemData,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).itemTypeID = *(int32_t *)&pOVar1[1].klass;
      auStackX_10[0] = 0xc;
      pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
      pSVar3 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (itemData,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pSVar4 = (String *)0x0;
      if (pSVar3 == (String *)0x0) {
        (this->fields).name = (String *)0x0;
      }
      else {
        pSVar5 = pSVar4;
        if (pSVar3->klass == pSRam0000000182dc50c0) {
          pSVar5 = pSVar3;
        }
        if (pSVar5 == (String *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->fields).name = pSVar5;
        pSVar5 = pSVar4;
        if (pSVar3->klass == pSRam0000000182dc50c0) {
          pSVar5 = pSVar3;
        }
        if (pSVar5 == (String *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).name >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      auStackX_10[0] = 0x6b;
      pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
      pSVar3 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (itemData,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pSVar3 == (String *)0x0) {
        (this->fields).description = (String *)0x0;
      }
      else {
        pSVar5 = pSVar4;
        if (pSVar3->klass == pSRam0000000182dc50c0) {
          pSVar5 = pSVar3;
        }
        if (pSVar5 == (String *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->fields).description = pSVar5;
        pSVar5 = pSVar4;
        if (pSVar3->klass == pSRam0000000182dc50c0) {
          pSVar5 = pSVar3;
        }
        if (pSVar5 == (String *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).description >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      auStackX_10[0] = 0x6d;
      pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (itemData,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar1);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar11 = *(bool *)&pOVar1[1].klass;
        (this->fields).isDeleted = bVar11;
        if (bVar11 == 0) {
          auStackX_10[0] = 0xd;
          pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (itemData,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          pBVar12 = TypeInfo__System__Byte;
          if (pOVar1 == (Object *)0x0) {
            (this->fields).data = (Byte__Array *)0x0;
          }
          else {
            pBVar13 = (Byte__Array *)FUN_?(pOVar1,TypeInfo__System__Byte);
            if (pBVar13 == (Byte__Array *)0x0) {
              FUN_?(pOVar1,pBVar12);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (this->fields).data = pBVar13;
            pBVar12 = TypeInfo__System__Byte;
            lVar7 = FUN_?(pOVar1,TypeInfo__System__Byte);
            if (lVar7 == 0) {
              FUN_?(pOVar1,pBVar12);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)&(this->fields).data >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          auStackX_10[0] = 0x28;
          pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (itemData,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pOVar1 == (Object *)0x0) goto code_?;
          if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar1,lRam_?);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (this->fields).hasData = *(bool *)&pOVar1[1].klass;
        }
        auStackX_10[0] = 0x68;
        pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (itemData,pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar1);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (this->fields).resellable = *(bool *)&pOVar1[1].klass;
          auStackX_10[0] = 0x4f;
          pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (itemData,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pOVar1 != (Object *)0x0) {
            if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar1);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (this->fields).priceGold = *(int32_t *)&pOVar1[1].klass;
            auStackX_10[0] = 0x6c;
            pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (itemData,pOVar1,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pOVar1 != (Object *)0x0) {
              if ((pOVar1->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar1);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (this->fields).shopInventoryID = *(int32_t *)&pOVar1[1].klass;
              auStackX_10[0] = 0x6a;
              pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
              pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (itemData,pOVar1,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (pOVar1 != (Object *)0x0) {
                if ((pOVar1->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar1);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                (this->fields).authorProfileID = *(int32_t *)&pOVar1[1].klass;
                auStackX_10[0] = 0x6e;
                pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
                pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (itemData,pOVar1,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (pOVar1 != (Object *)0x0) {
                  if ((pOVar1->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar1);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  (this->fields).originalItemID = *(int32_t *)&pOVar1[1].klass;
                  auStackX_10[0] = 0x24;
                  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
                  iVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)itemData,pOVar1,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                     ->klass->rgctx_data[0x21].method);
                  if (-1 < iVar14) {
                    auStackX_10[0] = 0x24;
                    pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
                    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (itemData,pOVar1,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    if (pOVar1 == (Object *)0x0) goto code_?;
                    if ((pOVar1->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar1,lRam_?);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    (this->fields).purchased = *(bool *)&pOVar1[1].klass;
                  }
                  auStackX_10[0] = 0x8d;
                  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
                  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (itemData,pOVar1,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  if (pOVar1 != (Object *)0x0) {
                    if ((pOVar1->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar1);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    (this->fields).isDefaultInvItem = *(bool *)&pOVar1[1].klass;
                    auStackX_10[0] = 0xe;
                    pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
                    iVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                        *)itemData,pOVar1,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                       ->klass->rgctx_data[0x21].method);
                    if (-1 < iVar14) {
                      auStackX_10[0] = 0xe;
                      pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
                      pSVar3 = (String *)
                               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,System::Object]::
                               Dictionary_2_System_Object_System_Object__get_Item
                                         (itemData,pOVar1,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         );
                      if (pSVar3 == (String *)0x0) {
                        (this->fields).imagePath = (String *)0x0;
                      }
                      else {
                        pSVar5 = pSVar4;
                        if (pSVar3->klass == pSRam0000000182dc50c0) {
                          pSVar5 = pSVar3;
                        }
                        if (pSVar5 == (String *)0x0) {
                          FUN_?(pSVar3);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        (this->fields).imagePath = pSVar5;
                        if (pSVar3->klass == pSRam0000000182dc50c0) {
                          pSVar4 = pSVar3;
                        }
                        if (pSVar4 == (String *)0x0) {
                          FUN_?(pSVar3);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                      }
                      if (iRam_? != 0) {
                        uVar6 = (uint)((ulonglong)&(this->fields).imagePath >> 0xc);
                        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                          LOCK();
                          bVar10 = uVar8 == *puVar9;
                          if (bVar10) {
                            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar10);
                      }
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* InventoryItem(ShopItem) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_3
               (InventoryItem *this,ShopItem *itemToCopy,MethodInfo *method)

{
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  if (itemToCopy == (ShopItem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields).itemID = (itemToCopy->fields).itemID;
  (this->fields).itemCategoryID = (itemToCopy->fields).itemCategoryID;
  (this->fields).itemTypeID = (itemToCopy->fields).itemTypeID;
  (this->fields).name = (itemToCopy->fields).name;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).name >> 0xc);
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
  iVar7 = iRam_?;
  (this->fields).description = (itemToCopy->fields).description;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).description >> 0xc);
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
  (this->fields).isDeleted = 0;
  (this->fields).data = (itemToCopy->fields).data;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).data >> 0xc);
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
  (this->fields).resellable = (itemToCopy->fields).resellable;
  (this->fields).priceGold = (itemToCopy->fields).priceGold;
  (this->fields).purchased = 1;
  (this->fields).isDefaultInvItem = 0;
  return;
}

